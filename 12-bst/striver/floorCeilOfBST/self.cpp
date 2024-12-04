// /**
//  * Definition for a binary tree node.
//  * class TreeNode {
//  *     int data;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
//  * };
//  **/

// class Solution
// {
// public:
//     vector<int> floorCeilOfBST(TreeNode *root, int key)
//     {
//         // your code goes here
//         int floor = -1;
//         int ceil = -1;
//         TreeNode *curr = root;

//         while (curr != nullptr)
//         {
//             if (curr->data == key)
//             {
//                 floor = curr->data;
//                 break;
//             }
//             else if (curr->data < key)
//             {
//                 floor = curr->data;
//                 curr = curr->right;
//             }
//             else
//             {
//                 curr = curr->left;
//             }
//         }
//         curr = root;

//         while (curr != nullptr)
//         {
//             if (curr->data == key)
//             {
//                 ceil = curr->data;
//                 //  !m1 :: avoid going futher
//                 break;
//             }
//             else if (curr->data < key)
//             {
//                 curr = curr->right;
//             }
//             else
//             {
//                 //! m2
//                 ceil = curr->data;

//                 curr = curr->left;
//             }
//         }
//         return {floor, ceil};
//     }
// };