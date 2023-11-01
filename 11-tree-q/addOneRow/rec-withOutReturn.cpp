
// class Solution {
// public:
//     void dfs(TreeNode* root, int val, int currDepth, int depth){
//         if(root == NULL) return ;
//         if(currDepth == depth - 1 ){
//             // TreeNode * node = new TreeNode(val);
//             TreeNode* nodeLeft = root->left ;
//             TreeNode* nodeRight = root->right;
//             root->left = new TreeNode(val);
//             root->right = new TreeNode(val);
//             //
//             root->left->left = nodeLeft;
//             root->right->right = nodeRight;
//         }
//         dfs(root->left , val , currDepth + 1 , depth);
//         dfs(root->right , val , currDepth + 1  , depth) ;
//     }
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//         if(depth == 1){
//             TreeNode * node = new TreeNode(val);
//             node->left = root;
//             node->right = NULL;

//             return node;//M return 
//         }
//         int currDepth = 1 ;
//       dfs(root , val , currDepth,  depth );
//       return root;
//     }
// };