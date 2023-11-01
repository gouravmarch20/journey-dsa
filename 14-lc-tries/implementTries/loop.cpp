// class Node{
//     public:
//        vector<Node*> children;
//        bool endNode;
//        Node(): children(26 , NULL) , endNode(false) {}//^m2:
       
// };
// class Trie {
// public:
//     Node * root;
//     Trie() {
//         root = new Node();
//     }
    
//     void insert(string word) {
//         Node * temp = root;
//         for(char ch : word){
//             int index = ch - 'a';
//             if(temp->children[index] == NULL){
//                 temp->children[index] = new Node();
//             }
//             temp = temp->children[index];
//         }
//         temp->endNode = true;//^m1:
//     }
    
//     bool search(string word) {
//               Node * temp = root;
//         for(char ch : word){
//             int index = ch - 'a';
//             if(temp->children[index] == NULL){
//                 return false;
//             }
//             temp = temp->children[index];
//         }
//         return temp->endNode;
//     }
    
//     bool startsWith(string prefix) {
//              Node * temp = root;
//         for(char ch : prefix){
//             int index = ch - 'a';
//             if(temp->children[index] == NULL){
//                 return false;
//             }
//             temp = temp->children[index];
//         }
//         return true;
//     }
// };

// /**
//  * Your Trie object will be instantiated and called as such:
//  * Trie* obj = new Trie();
//  * obj->insert(word);
//  * bool param_2 = obj->search(word);
//  * bool param_3 = obj->startsWith(prefix);
//  */