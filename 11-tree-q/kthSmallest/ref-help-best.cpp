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
//     void bstTraversal(TreeNode* root , int & k  , int &ans){
//         if(root == NULL || k == 0) return; // Stop traversal if k is already found or root is NULL.

//         bstTraversal(root->left , k , ans );
//         //M unaware how node working wrong code
//           k--; //L: after each node left visit it run 
//          // Set k to 0 to stop further traversal.
//           if(k == 0){ 
//             ans = root->val;
//             return;
//         }
//         bstTraversal(root->right , k , ans);
//         //L: after each node right visit below code run
//     }
//     int kthSmallest(TreeNode* root, int k) {
//          int ans = -1 ;
//          bstTraversal(root , k , ans);
//          return ans;
//     }
// };