// // Definition for a binary tree node.
// // struct TreeNode {
// //     int val;
// //     TreeNode *left;
// //     TreeNode *right;
// //     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// //     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// //     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// // };
//TODO: UNABLE TO DO DRY RUN NEETCODE 
// class Solution {
// public:
//     void helper(TreeNode* node, TreeNode*& prev, int& minDiff) {
//         if (node == nullptr) return;

//         // Recursively traverse the left subtree
//         helper(node->left, prev, minDiff);

//         // Calculate the absolute difference between the current node and the previous node
//         if (prev != nullptr) {
//             minDiff = min(minDiff, abs(node->val - prev->val));
//         }

//         // Update the previous node
//         prev = node;

//         // Recursively traverse the right subtree
//         helper(node->right, prev, minDiff);
//     }

//     int minDiffInBST(TreeNode* root) {
//         int minDiff = INT_MAX;
//         TreeNode* prev = nullptr; // To keep track of the previous node while traversing

//         // In-order traversal of the BST
//         helper(root, prev, minDiff);

//         return minDiff;
//     }
// };
