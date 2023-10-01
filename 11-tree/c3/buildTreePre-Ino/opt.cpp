#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

class Node {
 public:
  int data;
  Node* left;
  Node* right;
  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
void levelOrderTraversal(Node* root) {
  queue<Node*> q;
  // inital
  // cout << "-----> " << root->data << endl;
  q.push(root);
  q.push(NULL);  //? putting null for new line marking
  while (!q.empty()) {
    // A
    Node* temp = q.front();
    // B
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty())
      // ? it's grantee that queue will only only empty when tree ended --> each
      // node have 2 child in queue & we keep push them
      {
        q.push(NULL);
      }
    } else {
      // C
      cout << temp->data << " ";
      // D
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

void createMapping(vector<int> inorder, map<int, int> nodeToIndex, int n) {
  for (int i = 0; i < n; i++) {
    nodeToIndex[inorder[i]] = i;
  }
}
// size : to avoid going out
// index : preorder root access
// inorder start -> left side of root
// inorder end -> right side of root
Node* buildTreeFormPreOrderInorder(vector<int> inOrder, vector<int> preOrder,
                                   int size, int& index, int inorderStart,
                                   int inorderEnd, map<int, int>& nodeToIndex) {
  // base case ->
  if (index >= size || inorderStart > inorderEnd) {
    return NULL;
  }
  //   step1: create root by preorder index
  int element = preOrder[index++];  //^ increment index as ref var
  Node* root = new Node(element);
  //   step2 : find postion center for inorder
  int position = nodeToIndex[element];
  //   step3: root left solve
  root->left = buildTreeFormPreOrderInorder(
      inOrder, preOrder, size, index, inorderStart, position - 1, nodeToIndex);
  root->right = buildTreeFormPreOrderInorder(
      inOrder, preOrder, size, index, position + 1, inorderEnd, nodeToIndex);
  return root;
}

int main() {
  vector<int> inorder = {40, 20, 50, 10, 60, 30, 70};
  vector<int> preorder = {10, 20, 40, 50, 30, 60, 70};
  int size = inorder.size() ;
  int index = 0;
  int inorderStart = 0;
  int inorderEnd = size - 1;
  map<int, int> nodeToIndex;
  createMapping(inorder, nodeToIndex, size);
  cout << "building tree " << endl;
  Node* root = buildTreeFormPreOrderInorder(
      inorder, preorder, size, index, inorderStart, inorderEnd, nodeToIndex);
  cout << "print level order traversal  " << endl;
  levelOrderTraversal(root);

  return 0;
}



