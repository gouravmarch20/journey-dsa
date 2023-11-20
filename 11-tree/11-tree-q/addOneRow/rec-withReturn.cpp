
// class Solution {
// public:
//     TreeNode* add(TreeNode* root, int val, int currDepth, int depth){
//         if(root == NULL) return NULL;// L: if fun type int only iteger return , but if address then NULL can return nullpoint consider
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
//         root->left =  add(root->left , val , currDepth + 1 , depth);
//         root->right =  add(root->right , val , currDepth + 1  , depth) ;
//         return root;
//     }
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//         if(depth == 1){
//             TreeNode * node = new TreeNode(val);
//             node->left = root;
//             node->right = NULL;

//             return node;//M return 
//         }
//         int currDepth = 1 ;
//         add(root , val , currDepth,  depth );
//       return root;
//     }
// };