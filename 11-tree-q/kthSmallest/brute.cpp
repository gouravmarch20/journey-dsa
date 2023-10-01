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
//     void bstTraversal(TreeNode* root , vector<int>  &ans){
//         if(root == NULL){
//             return ;
//         }
//         bstTraversal(root->left , ans);
//         ans.push_back(root->data);
//         bstTraversal(root->right , ans);
//     }
//     int kthSmallest(TreeNode* root, int k) {
        
//         vector<int> ans;
//         bstTraversal(root , ans);

//         return ans[k-1];//M k+1
//     }
// };