// class Node{
//     public://^m5 forgot public declare 
//     char data ;
//     int childCount ;
//     vector<Node*> children;
//     bool isTerminal ;
//     Node (char d){
//         this->data = d;
//         this->children.resize(26 , NULL);
//         this->childCount=0;
//         this->isTerminal = false;
//     }
// };

// class Solution {
// public:
//     Node * root ;

//     void insertWord(Node * root  , string s){
//         if(s.size() == 0) {
//             root->isTerminal = true ;
//             return ;
//         }
//         char ch = s[0];
//         int childIndex = ch - 'a';
//         Node * child = root;
//         //   Node * child;
//         if(root->children[childIndex] == NULL){
//             root->childCount++;
//             //M4 logic thinking , if already root->children connect to that  char count not need to increase , for new child track not more than one link 
//             child = new Node(ch);
//             root->children[childIndex] = child;
//         }else{
//             child = root->children[childIndex];
//         }
        
//         insertWord(child , s.substr(1));

//     }
//     //^m1 s datatype string type
//     //^m2 forgot take ans as reference
//     void lcp(Node * root , string  s , string & ans){
    
//         if(root->childCount != 1 || s.size() == 0 || root->isTerminal ){
//             return ;
//         }

//         char ch = s[0];
//         int childIndex =  ch - 'a';
//         ans.push_back(ch);

//         Node * child = root->children[childIndex];
//         lcp(child , s.substr(1) , ans);
//     }
//     string longestCommonPrefix(vector<string>& strs) {
//         root = new Node('-');
//         for(int i = 0 ; i < strs.size() ; i++){
//             insertWord(root , strs[i]);
//         }
//         //^m3 think that int / total no of prefix count need to return 
//         string ans;
//         string first = strs[0];
//         lcp(root , first , ans);
//         return ans;
//     }
// };