// int minBst(TreeNode* root) {
//     if (root == NULL) {
//         // If the tree is empty, return a sentinel value (e.g., -1) to indicate that there's no minimum value.
//         return -1;
//     }

//     // Recursively find the minimum value in the left and right subtrees.
//     int leftMin = minBst(root->left);
//     int rightMin = minBst(root->right);

//     // Find the minimum value among left subtree, right subtree, and the current node's value.
//     int minVal = root->val;
    
//     if (leftMin != -1) {
//         minVal = min(minVal, leftMin);
//     }
    
//     if (rightMin != -1) {
//         minVal = min(minVal, rightMin);
//     }

//     return minVal;
// }


