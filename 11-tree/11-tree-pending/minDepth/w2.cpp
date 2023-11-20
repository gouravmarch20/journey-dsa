// // User function Template for C

// int minValue(struct Node *root) {
//     // your code here
//         if (root->left) {
//         int leftMin = minValue(root->left);
//         return (leftMin < root->data) ? leftMin : root->data;
//     } else {
//         return root->data;
//     }
// }