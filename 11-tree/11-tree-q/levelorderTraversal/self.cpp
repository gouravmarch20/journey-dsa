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
//     vector<vector <int>> levelorderTraversal(TreeNode * root){
//         vector<vector <int>> arr;
//          if(root == NULL) return arr;
//         //!queue <int> q;//M queue not storing address
//         queue<TreeNode * > q;
//         q.push(root);//^m2 need to add whole node , not value 
//         //
//         while(1){
//             int size = q.size();
//             vector <int> temp ;

//             if(q.size() == 0) {
//                 break;
//             }
//             while(size > 0){
//                 TreeNode * tempNode = q.front();
//                 //! m3 q.pop_back();//! no function name push , pop like stack
//                 q.pop();
//                 temp.push_back(tempNode->val);//^ m4 forgot to add 
//                 //NOTE: if null not adding in queue --> 0 size if leaveNode
//                 if(tempNode->left != NULL){
//                  q.push(tempNode->left);
//                 }
//                 if(tempNode->right != NULL){
//                  q.push(tempNode->right);
//                 }
//                 size--;
//             }
//             arr.push_back(temp);
//         }
//         return arr;

//     }
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         return levelorderTraversal(root);
//     }
// };