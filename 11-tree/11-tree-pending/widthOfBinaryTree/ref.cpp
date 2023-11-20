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
//     int widthOfBinaryTree(TreeNode* root) {
//         int ans=0;
//         if(!root)return ans;
//         queue<pair<TreeNode*,long long int>>pq;
//         pq.push({root,0});
//         int firstele,secondele;
//         int mini=pq.front().second;
//         while(!pq.empty())
//         {
//             int size=pq.size();
//             long long int mini=pq.front().second;
//             for(int i=0;i<size;i++)
//             {
//                 long long int curr=pq.front().second-mini;
//                 TreeNode *node=pq.front().first;
//                 pq.pop();
//                 if(i==0)
//                 firstele=curr;
//                 if(i==size-1)
//                 secondele=curr;

//                 if(node->left)
//                 pq.push({node->left,2*curr +1});
//                 if(node->right)
//                 pq.push({node->right,2*curr+2});
//             }
//             ans=max(ans,secondele-firstele +1);
//         }
//         return ans;
//     }
// };