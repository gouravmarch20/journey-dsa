// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> children;

//     Node() {}

//     Node(int _val) {
//         val = _val;
//     }

//     Node(int _val, vector<Node*> _children) {
//         val = _val;
//         children = _children;
//     }
// };
// */

// class Solution {
// public:
//     void helper(Node* root , vector<vector<int>> & ans ){
//         if(root == NULL) return ;
//         queue <Node * > q ;
//         q.push(root);
//         vector<int> a ;
//         a.push_back( root->val);
//         ans.push_back(a);//M avoid 
//         while(!q.empty()){
//             Node * node = q.front();
//             vector <int> temp;
        //M two loop use
//             for(int i = 0 ; i < node->children.size() ; i++){
//                 q.push(node->children[i]);
//                 temp.push_back(node->children[i]->val);
//             }
//             q.pop();
//             if(temp.size() != 0){
//             ans.push_back(temp);

//             }


//         }
//     }
//     vector<vector<int>> levelOrder(Node* root) {
//          vector<vector<int>> ans;
//         helper(root , ans);
//         return ans;
//     }
// };