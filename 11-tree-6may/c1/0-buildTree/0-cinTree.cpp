#include <iostream>
#include <vector>

using namespace std;

class Node {
 public:
  int data;
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
Node *buildTree() {
  int data;
  cout << "Enter the data: " << endl;
  cin >> data;

  if (data == -1) {
    return NULL;
  }

  // Step A
  Node *root = new Node(data);

  cout << "Enter data for left part of " << data << " node " << endl;
  // Step B : root kai left ko connect with ==> solved left
  root->left = buildTree();

  cout << "Enter data for right part of " << data << " node " << endl;
  // Step C : root kai root ko connect with ==> solved right

  root->right = buildTree();

  return root;
}

int main() {
  Node *root = nullptr;

  root = buildTree();//? return new tree 

  return 0;
}
