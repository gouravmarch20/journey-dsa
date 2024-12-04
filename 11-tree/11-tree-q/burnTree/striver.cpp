#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    // Method to burn the tree starting from a given node
    int timeToBurnTree(TreeNode* root, int start) {
        // Create a map to store the parent nodes
        unordered_map<TreeNode*, TreeNode*> mpp;
        // Get the target node (starting node for burning)
        TreeNode* target = bfsToMapParents(root, mpp, start);
        // Find the maximum distance to burn the tree
        int maxi = findMaxDistance(mpp, target);
        return maxi;
    }

private:
    // Method to map parents of all nodes using BFS
    TreeNode* bfsToMapParents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& mpp, int start) {
        // Queue for BFS
        queue<TreeNode*> q;
        // Push the root node to the queue
        q.push(root);
        TreeNode* res = new TreeNode(-1);

        while (!q.empty()) {
            // Get the front node from the queue
            TreeNode* node = q.front();
            q.pop();
            // Check if this is the start node
            if (node->data == start) res = node;
            // Map the left child to its parent
            if (node->left != nullptr) {
                mpp[node->left] = node;
                q.push(node->left);
            }
            // Map the right child to its parent
            if (node->right != nullptr) {
                mpp[node->right] = node;
                q.push(node->right);
            }
        }
        return res;
    }

    // Method to find the maximum distance to burn the tree
    int findMaxDistance(unordered_map<TreeNode*, TreeNode*>& mpp, TreeNode* target) {
        // Queue for BFS to find max distance
        queue<TreeNode*> q;
        q.push(target);
        // Map to check visited nodes
        unordered_map<TreeNode*, int> vis;
        vis[target] = 1;
        int maxi = 0;

        while (!q.empty()) {
            int size = q.size();
            int fl = 0;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                // Check left child
                if (node->left != nullptr && vis.find(node->left) == vis.end()) {
                    fl = 1;
                    vis[node->left] = 1;
                    q.push(node->left);
                }

                // Check right child
                if (node->right != nullptr && vis.find(node->right) == vis.end()) {
                    fl = 1;
                    vis[node->right] = 1;
                    q.push(node->right);
                }

                // Check parent node
                if (mpp.find(node) != mpp.end() && vis.find(mpp[node]) == vis.end()) {
                    fl = 1;
                    vis[mpp[node]] = 1;
                    q.push(mpp[node]);
                }
            }
            // Increment max distance if any node was burned
            if (fl == 1) maxi++;
        }
        return maxi;
    }
};

// Main method to test the functionality
int main() {
    Solution sol;

    // Create the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int start = 4;

    // Get the time to burn the tree
    int result = sol.timeToBurnTree(root, start);
    cout << "Time to burn the tree: " << result << endl;

    return 0;
}
