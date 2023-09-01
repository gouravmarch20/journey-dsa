// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//                 // Create a map to store the indices of elements in the inorder traversal
//         unordered_map<int, int> inorder_map;
//         for (int i = 0; i < inorder.size(); ++i) {
//             inorder_map[inorder[i]] = i;
//         }
        
//         int preorderIndex = 0;
//         return buildTreeHelper(preorder, inorder_map, preorderIndex, 0, inorder.size() - 1);
//     }
    
//     TreeNode* buildTreeHelper(vector<int>& preorder, unordered_map<int, int>& inorder_map, int& preorderIndex, int inorderStart, int inorderEnd) {
//         if (preorderIndex >= preorder.size() || inorderStart > inorderEnd) {
//             return nullptr;
//         }
        
//         int rootValue = preorder[preorderIndex];
//         int inorderIndex = inorder_map[rootValue];
        
//         TreeNode* root = new TreeNode(rootValue);
//         preorderIndex++;
        
//         root->left = buildTreeHelper(preorder, inorder_map, preorderIndex, inorderStart, inorderIndex - 1);
//         root->right = buildTreeHelper(preorder, inorder_map, preorderIndex, inorderIndex + 1, inorderEnd);
        
//         return root;
//     }
    
// };