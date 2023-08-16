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
//     TreeNode* Slaves(vector<int>& preorder, int prestart, int preend, vector<int>& postorder, int poststart, int postend){
//         if(prestart > preend)
//             return NULL;

//         TreeNode* root = new TreeNode(preorder[prestart]);
//         if(prestart == preend)
//             return root;

//         int index = poststart;
//         while(postorder[index] != preorder[prestart+1])
//             index++;

//         int totalelement = index-poststart + 1;

//         root->left = Slaves(preorder, prestart + 1, prestart + totalelement, postorder, poststart, index);
//         root->right = Slaves(preorder, prestart + totalelement + 1, preend, postorder, index+1, postend-1);

//         return root;
//     }

//     TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
//         int n = preorder.size()-1;
//         return Slaves(preorder, 0, n, postorder, 0, n);
//     }
// };