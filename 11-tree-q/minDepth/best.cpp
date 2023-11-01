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
//  int helper(TreeNode* root){
//      queue<TreeNode * > q;
//      q.push(root);
//      int c = 1 ;
//      while(!q.empty()){
//          int n = q.size();
//          for(int i = 0 ; i < n ; i++){//M forgot
//            TreeNode * node = q.front();
//         if(node->left == NULL && node->right ==NULL) return c;
//         q.pop();
//         if(node->left) q.push(node->left);
//         if(node->right) q.push(node->right);
//          }
//          c++;//M2 in for loop
     
//      }
//      return c;
//     }
//     int minDepth(TreeNode* root) {
//         if(!root) return 0;
//         return helper(root);
//     }
// };