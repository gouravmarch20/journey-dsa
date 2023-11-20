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
// private : 
//     int res;//L: a new way of doing recursion , no tension of return value
// public:
//     void inorder(TreeNode* root , int & k ){
//         if(root == NULL ) return; 

//         inorder(root->left , k );
//         if(--k == 0)  res =  root->val;
    
//         inorder(root->right , k );

//     }
//     int kthSmallest(TreeNode* root, int k) {
//          inorder(root , k );
//          return res;
//     }
// };