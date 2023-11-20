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
//     int minBst(TreeNode * root){
//         int mini = INT_MAX;
//         if(root == NULL){
//             return mini;
//         }
//        int res = min(minBst(root->left) , minBst(root->left) );
//        mini = min(res, root->val);
//        return mini;
//     }
//     int maxBst(TreeNode * root){
//         int max = INT_MIN;
//         if(root == NULL){
//             return max;
//         }
//         int res = maxBst(root->right);
//     }
//     bool isValidBST(TreeNode* root) {
//         if((minBst(root->right) > root-val )&& (maxBst(root-left) < root-> val ) && isValidBST(root->left) && isValidBST(root->right) ){

//         }else{
//             return false;
//         }
//     }
// };