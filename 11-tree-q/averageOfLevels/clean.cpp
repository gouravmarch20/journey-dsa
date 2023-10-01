// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
//  right(right) {}
//  * };
//  */
// class Solution {
// public:

//     vector<double> averageOfLevels(TreeNode* root ) {
//         vector<double> ans;
//         queue <TreeNode * > q;
//         q.push(root);
//         while(!q.empty()){
//             int n = q.size();
//             double sum = 0;
//            for(int i = 0 ; i < n ; i++){
//               TreeNode *  node = q.front();
//               if(node->left) q.push(node->left);//L: 1 line code , null
//               //* address mai stop if case false
//              if(node->right) q.push(node->right); sum +=
//               node->val;//L: current node sum only q.pop();//^ remove current
//            }
//            ans.push_back(sum/n);//!double/int = double
//         }
//         return ans;
//     }
// };