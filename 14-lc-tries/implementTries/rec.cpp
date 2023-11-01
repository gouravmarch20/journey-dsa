#include <iostream>
#include <vector>
class TrieNode {
 public:
  char data;
  TrieNode* children[26];
  bool isTerminate;
  TrieNode(char d) {
    this->data = d;
    this->isTerminate = false;
    for (int i = 0; i < 26; ++i) {
      children[i] = nullptr;
    }
  }
};

using namespace std;
bool searchWord(TrieNode* root, string word) {
  if (word.size() == 0) {
    return root->isTerminate;
  }
  int childIndex = word[0] - 'a';
  if (root->children[childIndex] == NULL) {
    return false;
  }
  TrieNode* child = root->children[childIndex];
  // searchWord( child , word.substr(1));
  return searchWord(child, word.substr(1));
  ;
}
void remove(TrieNode* root, string word) {
  if (word.size() == 0) {
    root->isTerminate = false;
    return;
  }
  char ch = word[0];
  int childIndex = ch - 'a';
  TrieNode* child;
  if (root->children[childIndex] != NULL) {
    child = root->children[childIndex];
  } else {
    return;
  }
  remove(child, word.substr(1));
};
void insertWord(TrieNode* root, string word) {
  if (word.size() == 0) {
    root->isTerminate = true;
    return;
  }
  char ch = word[0];
  int childIndex = ch - 'a';
  TrieNode* child;
  if (root->children[childIndex] != NULL) {
    // already present node , so curr node ko point to this
    child = root->children[childIndex];
  } else {
    //?  not present so create node , and link , make create node root
    child = new TrieNode(ch);

    root->children[childIndex] = child;
  }
  insertWord(child, word.substr(1));
};
int main() {
  TrieNode* root = new TrieNode('-');
  insertWord(root, "got");
  remove(root, "got");
  bool res = searchWord(root, "got");
  if (res) {
    cout << "present " << endl;
  }else{
    cout << "not present "<<endl;
  }

  return 0;
}
