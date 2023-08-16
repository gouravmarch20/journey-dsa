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

//    vector<TreeNode *> finder(int s, int e){
//      vector<TreeNode *> ans;
//      if(s > e) {
//        ans.push_back(nullptr);
//        return ans;
//      }
//      for(int i = s; i <= e; i++){
//        vector<TreeNode * > leftst = finder(s, i - 1);
//        vector<TreeNode *> rightst = finder(i + 1, e);
//        for(TreeNode * l : leftst){
//          for(TreeNode * r: rightst){
//            TreeNode * root = new TreeNode(i);
//            root->left = l;
//            root->right = r;
//            ans.push_back(root);
//          }
//        }
//      }
//      return ans;
//    }

//     vector<TreeNode*> generateTrees(int n) {
//       return finder(1, n);
//     }
// };