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
//     int helper(TreeNode *root){
//         int a = INT_MAX;
//         int b = INT_MAX;
//         if(root == NULL){
//             return INT_MAX ;
//         }
//         if(root && root->left){
//             a = root->val - root->left->val;
//         }
//        if(root && root->right){
//             b = root->right->val - root->val ;
//         }
//        a = min( a , helper(root->left));
//        b= min(b ,  helper(root->right));
//         return min(a , b);
//     }
//     int minDiffInBST(TreeNode* root) {
//         return helper(root);
//     }
// };