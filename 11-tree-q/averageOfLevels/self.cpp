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
//     void helperLevel(TreeNode* root , vector<double> & ans){
//                  if(root == NULL) return ;

//         queue <TreeNode*> q;
//         q.push(root);
//         ans.push_back(root->val);
      
//         while(!q.empty()){
//             int size = q.size();
//             //pop first then calculting size 
//             double s = 0 ;
//             int c = 0;
//             while(size > 0){
//                 //^ write temp outside while size util not 0 , pick & remove
//                 TreeNode * temp = q.front();
//                  q.pop();
//                 if(temp->left != NULL){
//                 c++;
//                 s += temp->left->val;
//                 q.push(temp->left);
//                 }
//                 if(temp->right != NULL){
//                  c++;
//                  s += temp->right->val;
//                  q.push(temp->right);
//                 }
//               size--;


//             }
//             cout << s << " ";
//             if(c != 0){
//              double res = s/c;//L: int / int == int 
//              ans.push_back(res);
//             }

//         }
//     }
//     vector<double> averageOfLevels(TreeNode* root ) {
//         vector<double> ans;
//         helperLevel(root , ans);
//         return ans;
//     }
// };