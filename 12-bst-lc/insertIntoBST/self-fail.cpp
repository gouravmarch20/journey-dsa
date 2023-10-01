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
//     void helperInsert(TreeNode* root , int val){
//         //^m forgot -> val eg: root->left only written
//         if(root == NULL){
//             return ;
//         }
//         if(root->left != NULL && root->val > val && root->left->val < val){
//             TreeNode * node = root->left;
//             root->left = new TreeNode(val);
//             root->left->left = node ;
//         }
//            if(root->right != NULL && root->val < val && root->right->val < val){
//             TreeNode * node = root->right;
//             root->right = new TreeNode(val);
//             root->right->right = node ;
//         }
//         helperInsert(root->left , val);
//         helperInsert(root->right ,val);

//     }
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         helperInsert(root , val);
//         return root;
//     }
// };