
// class Solution {
// public:
// int getHeight(TreeNode *root) {
//   if (root == NULL) {
//     return 0;
//   }

//   int leftHeight = getHeight(root->left);
//   int rightHeight = getHeight(root->right);
//   int ans = 1 + max(leftHeight, rightHeight);  // M used + sign instead of ,
//   return ans;
// }
//     bool isBalanced(TreeNode* root) {
//           // ^ root end means -> current root all case valid
//   if (root == NULL) {
//     return true;
//   }
//   int leftHeight = getHeight(root->left);
//   int rightHeight = getHeight(root->right);
//   int diff = abs(leftHeight - rightHeight);
//   //
//   bool ans1 = (diff <= 1);
//   //   recursion task
//   bool leftAns = isBalanced(root->left);
//   bool rightAns = isBalanced(root->right);
//   if (ans1 && leftAns && rightAns) {
//     return true;
//   } else {
//     return false;
//   }
//     }
// };