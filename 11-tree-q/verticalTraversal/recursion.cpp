// // /**
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
//     void preOrder(TreeNode* root , map<int, vector<pair < int,int >>> & mp ,
//     int level , int y ){
//         if(root == NULL) return ;
//         mp[y].push_back({level , root->val});
//         preOrder(root->left , mp , level + 1 , y -1);
//         preOrder(root->right , mp , level + 1 , y + 1);
//     }
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         map<int, vector<pair < int,int >>> mp;
//         preOrder(root, mp , 0 , 0);
//         vector<vector<int>> ans;
//         for(auto it : mp){
    
//             sort(it.second.begin() , it.second.end());//^ row wise sort , if
//         //^both same value to sort in vector vector <int>temp; for(auto pair
//             : it.second ){
//                 temp.push_back(pair.second);
//             }
//             ans.push_back(temp);
//         }
//          return ans;
//     }

// };