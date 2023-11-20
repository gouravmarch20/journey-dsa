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
//     void helper(TreeNode* root, int val, int depth){
//         queue <TreeNode *> q ;
//         q.push(root);
//         for(int i = 1 ; i < depth ; i++){
//             int j = 0;
//             int n = q.size();
//             while(j < n){
//             TreeNode * node = q.front();
//             q.pop();
//             if(node->left != NULL) q.push(node->left);
//             if(node->right != NULL ) q.push(node->right);
//                 j++;//M miss this one 
//             }
//         }

//         // for(int i = 0 ; i < q.size() ; i++){// M : 2 dynamic varible compare --> q.size decreasing pop , i increase
//         while (!q.empty()) {
//             TreeNode * node = q.front();
//             TreeNode * temp = node->left;
//             TreeNode * temp1 = node->right;
//             node->left = new TreeNode(val);
//             node->right = new TreeNode(val);
//             q.pop();
//             // node->left = temp ;//M3:: blunder same node mai adding 

//             node->left->left = temp;
//             node->right->right= temp1;
//         }
//     }
//     TreeNode* addOneRow(TreeNode* root, int val, int depth) {
//        helper(root, val, depth);
//         return root;
//     }
// };