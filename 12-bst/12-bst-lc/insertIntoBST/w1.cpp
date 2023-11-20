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
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         if(root == NULL ){
//             return new TreeNode(val);;//&: can not think
//         }
//         // if(root->left->val < val){//M in bst root base we move
//         if(root->val < val){
//             //^m2: forget to connect leaf node
//            root->right =  insertIntoBST(root->right , val);
//         }else{
//           root->left =  insertIntoBST(root->left ,val);
//         }
//         return root;//L: return root recursion not come here 

//     }
// };