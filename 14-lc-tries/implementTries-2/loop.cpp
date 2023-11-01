// class Node{
//     public://^m2 : forgot
//     int wordCount = 0;
//     int prefixCount = 0;
//     Node* children[26];
// };

// class Trie {
// public:
//     Node * root;
// 	Trie() {
//         root = new Node();
// 	}

// 	void insert(string word) {
//         Node * temp = root ;
//         for(int i = 0 ; i < word.size() ; i++){
//             int childIndex = word[i] - 'a';
//             if(temp->children[childIndex] == NULL){
//                 temp->children[childIndex] = new Node();
//             }
//             temp = temp->children[childIndex];
//             temp->prefixCount++;
//         }
//             temp->wordCount++;
// 	}

// 	int countWordsEqualTo(string word) {

//          Node * temp = root ;
//         for(int i = 0 ; i < word.size() ; i++){
//             int childIndex = word[i] - 'a';
//             if(temp->children[childIndex] == NULL){
//                 return 0;
//             }
//             temp = temp->children[childIndex];
//         }
//            return temp->wordCount;
// 	}

// 	int countWordsStartingWith(string word) {

//         Node * temp = root ;
//         for(int i = 0 ; i < word.size() ; i++){
//             int childIndex = word[i] - 'a';
//             if(temp->children[childIndex] == NULL){
//                 return 0;
//             }
//             temp = temp->children[childIndex];
//         }
//            return temp->prefixCount;
// 	}

// 	void erase(string word) {

//                 Node * temp = root ;
//         for(int i = 0 ; i < word.size() ; i++){
//             int childIndex = word[i] - 'a';
//             if(temp->children[childIndex] == NULL){
//                 return ;
//             }
//             temp = temp->children[childIndex];
//              temp->prefixCount--;//M 1: doing before temp change
//         }
//             temp->wordCount--;
// 	}
// }