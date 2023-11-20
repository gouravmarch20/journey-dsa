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
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> ans ;
//         //? queue for BS traversal
//         queue < pair < TreeNode * , pair<int,int> > >  q; //L:  <> use what
//         DS it will have inside current DS
//         //? queue kai under < TreeNode* ,pair :::  pair<TreeNode , pair :::
//         pair<int,int> q.push({root ,{ 0 , 0 }});

//         //? map to store col->row->sortValue
//         map<int , map< int , multiset<int>>> mp;//L: multiset already sort ,
////*         accept duplicate

//         while(!q.empty()){
//             auto front = q.front();//& auto ~ queue < pair < TreeNode * ,
//             pair<int,int> > > q.pop(); TreeNode* & node = front.first ; auto
//             coordinate = front.second;//pair<int,int> > int & row =
//             coordinate.first; int & col = coordinate.second;
//             mp[col][row].insert(node->val);
//             if(node->left)
//               q.push({node->left , { row + 1 , col - 1 }});
//             if(node->right)
//               q.push({node->right , { row + 1 , col + 1 }});
//         }
//         for(auto it : mp){
//             auto & colMap = it.second ;
//             vector<int> vLine;
//             for(auto colMapIt : colMap ){
//                auto & mset = colMapIt.second ;
////*L              insert vector inbuilt method to assign array element 
//                 vLine.insert(vLine.end() , mset.begin() , mset.end());
//             }
//             ans.push_back(vLine);

//         }
//     return ans;
//     }
// };