#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == nullptr) return ans;

        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;  // Flag to alternate the direction of traversal

        while (!q.empty()) {
            int queueSize = q.size();  // Number of nodes at the current level
            vector<int> level;

            for (int i = 0; i < queueSize; ++i) {
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->data);  // Process the current node

                // Add left and right children to the queue for the next level
                if (front->left != nullptr) {
                    q.push(front->left);
                }
                if (front->right != nullptr) {
                    q.push(front->right);
                }
            }

            // Reverse the level if we're going right to left
            if (!leftToRight) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);
            leftToRight = !leftToRight;  // Toggle direction for next level
        }

        return ans;
    }
};
