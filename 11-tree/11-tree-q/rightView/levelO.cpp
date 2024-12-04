/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        //your code goes here
        queue <TreeNode* > q ;
        map <int , int > mp ; 
        vector<int> res; 
        if(root == nullptr) return res ;
        // 
        int level = 0;
        q.push(root);
        while(!q.empty()){
         
             int size = q.size();

            for(int i = 0 ; i < size ; i++){


          
            TreeNode * node = q.front();
             q.pop();
            //  mp.insert({level , node->data});
               mp[level] = node->data; 


     if(node->left != nullptr ){
    q.push({node->left });
}
if(node->right != nullptr){
    q.push((node->right ));
}
            }
            level++;
        } 

        for(auto it : mp){
            res.push_back(it.second);
        }
        return res;
    }
};