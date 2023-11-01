// /*
// // Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> neighbors;
//     Node() {
//         val = 0;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val) {
//         val = _val;
//         neighbors = vector<Node*>();
//     }
//     Node(int _val, vector<Node*> _neighbors) {
//         val = _val;
//         neighbors = _neighbors;
//     }
// };
// */

// class Solution {
// public:
//     unordered_map<Node*, Node*> Visited;

//     Node* cloneGraph(Node* node){
//         if(!node) 
//             return NULL;

//         if(Visited.find(node) != Visited.end()) 
//             return Visited[node];

//         Node* root = new Node(node->val);
//         Visited[node] = root;
//         for(auto& child:node->neighbors){
//             root->neighbors.push_back(cloneGraph(child));
//         }

//         return root;
//     }
