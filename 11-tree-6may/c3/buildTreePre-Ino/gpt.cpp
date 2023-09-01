#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // Create a map to store the indices of elements in the inorder traversal
        unordered_map<int, int> inorder_map;
        for (int i = 0; i < inorder.size(); ++i) {
            inorder_map[inorder[i]] = i;
        }
        
        int preorderIndex = 0;
        return buildTreeHelper(preorder, inorder_map, preorderIndex, 0, inorder.size() - 1);
    }
    
    TreeNode* buildTreeHelper(vector<int>& preorder, unordered_map<int, int>& inorder_map, int& preorderIndex, int inorderStart, int inorderEnd) {
        if (preorderIndex >= preorder.size() || inorderStart > inorderEnd) {
            return nullptr;
        }
        
        int rootValue = preorder[preorderIndex];
        int inorderIndex = inorder_map[rootValue];
        
        TreeNode* root = new TreeNode(rootValue);
        preorderIndex++;
        
        root->left = buildTreeHelper(preorder, inorder_map, preorderIndex, inorderStart, inorderIndex - 1);
        root->right = buildTreeHelper(preorder, inorder_map, preorderIndex, inorderIndex + 1, inorderEnd);
        
        return root;
    }
};

// Function to print the inorder traversal of the tree (for verification)
void printInorder(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    Solution solution;
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};
    
    TreeNode* root = solution.buildTree(preorder, inorder);
    
    cout << "Inorder traversal of constructed tree: ";
    printInorder(root);
    
    return 0;
}
