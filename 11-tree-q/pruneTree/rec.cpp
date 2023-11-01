
// class Solution {
//  public:
//   TreeNode* dfs(TreeNode* root) {
//     if (root == NULL) return NULL;
//     root->left = dfs(root->left);
    //M try to return here
//     root->right = dfs(root->right);
////L: each node run here once after left && right check --> the shoot remove  
//     if (root->val == 0 && root->right == NULL && root->left == NULL) {
//       return NULL;//^ not modify root so [0 , null , 0] return 0 at end
//     }
//     return root;
//   }
//   TreeNode* pruneTree(TreeNode* root) {
//     dfs(root);
//     // M edge case
//     if (root->val == 0 && root->left == NULL && root->right == NULL) {
//       return NULL;
//     }
//     return root;
//   }
// };