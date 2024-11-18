/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        // your code goes here
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        if (root == nullptr)
        {
            return ans;
        }

        q.push(root);

        //

        while (!q.empty())
        {

            vector<int> level;
            int size = q.size();
            // ! 1 time one level complete  ... queue we are pushing contin level sai no link ... so upper mai track how much to itterate from this queue 

            // for (int i = 0; i < q.size(); i++)
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                level.push_back(node->data);

                if (node->left != nullptr)
                {
                    q.push(node->left);
                }
                if (node->right != nullptr)
                {
                    q.push(node->right);
                }
            }
            ans.push_back(level);
        }
        return ans;

        ;
    }
};