
// class Solution {
// public:
  
//     TreeNode* pruneTree(TreeNode* root) {
    
//         if(root == NULL) return NULL;
//         root->left = dfs(root->left);
//         root->right = dfs(root->right);
//         if(root->val == 0 && root->right == NULL && root->left == NULL  ){
//             return NULL;//
//         }
//         return root;

//     }
// };