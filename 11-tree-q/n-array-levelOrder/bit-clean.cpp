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

//     vector<vector<int>> levelOrder(Node* root) {
//        vector<vector<int>> ans;
//        queue < Node*> q ;
//        q.push(root);//^m1 : forgot

//        if(root == NULL) return ans;

//        while(q.empty() == false){
//            vector<int> currLevel ;
//             int n = q.size();
//             for(int i = 0 ; i < n ; i++){
//                 Node* node = q.front();
//                 q.pop();
//                   // currLevel.push_back(q.front());//M2 : pushing address
//                 currLevel.push_back(node->val);

//                 for(int j =0 ; j < node->children.size() ; j++){
//                     // q.push(q.front()->children[i]);
//   q.push(node->children[j]);//M address sanitization , i index used inset of
// !  j index
//                 }

//             }
//             ans.push_back(currLevel);
//        }
//        return ans;

//     }
// };