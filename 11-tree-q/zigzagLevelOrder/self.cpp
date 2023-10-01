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
//     void helperLevelTraversal(TreeNode* root ,vector<vector<int>> & ans ){
//         if(root == NULL){
//             return ;
//         }
//         queue <TreeNode *> q;
//         q.push(root);
//         int c = 0;
//         while(!q.empty()){
//             vector <int> currLevel;
//             int n = q.size();
//             for(int i = 0 ; i < n ; i++){
//                 TreeNode * node = q.front();
//                 if(node->left) q.push(node->left);
//                 if(node->right) q.push(node->right);
//                 currLevel.push_back(node->val);//^ m1 : forgot val need to
//                 //^add 
//               q.pop();
//             }
//             if(currLevel.size() > 0 ){
//                 if(c & 1){
//                     reverse(currLevel.begin() , currLevel.end());
//                     ans.push_back(currLevel);
//                 }else{
//                     ans.push_back(currLevel);
//                 }
//             }
//             c++;

//         }
//     }
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         helperLevelTraversal(root , ans);
//         return ans;
//     }
// };