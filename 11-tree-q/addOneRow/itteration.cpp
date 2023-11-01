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
//     void bfs(TreeNode* root, int val, int currDepth, int depth){
//         queue <TreeNode * > q;
//         q.push(root);
//         for(int i = currDepth ; i < depth -1 ; i++){
//             int n = q.size();
//             int j = 0;
//             while(j < n ){
//                 TreeNode * node = q.front();
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//                 q.pop();
//                 j++;
//             }
//         }
//         int n = q.size();
//         int i = 0;
//         // cout << n ;

//         cout << q.front()->val;

//         while(i < n){
        
//             TreeNode * node = q.front();
//             TreeNode* nodeLeft = node->left ;
//             TreeNode* nodeRight = node->right;
//             node->left = new TreeNode(val);
//             node->right = new TreeNode(val);
//             node->left->left = nodeLeft;
//             node->right->right = nodeRight;
//             q.pop();
//             i++;
//         }
    

//     }
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//         if(depth == 1){
//             TreeNode * node = new TreeNode(val);
//             node->left = root;
//             node->right = NULL;

//             return node;//M return 
//         }
//         int currDepth = 1 ;
//         bfs(root , val , currDepth,  depth );
//       return root;
//     }
// };