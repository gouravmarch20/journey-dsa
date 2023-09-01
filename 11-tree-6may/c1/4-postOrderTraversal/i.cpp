#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
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

int index = 0;  // Global index to keep track of array traversal

Node *buildTree(vector<int> arr, int &i) {
  int data = arr[i];
  ++i;

  if (data == -1) {
    return NULL;
  }

  // s1: create node
  Node *root = new Node(data);
  // s2:

  root->left = buildTree(arr, i);
  // s3:
  root->right = buildTree(arr, i);
  return root;  //^ recursion solve result
}

void preOrderTraversal(Node *root) {
  if (root == NULL) {
    return;
  }

  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
  cout << root->data << " ";
}

int main() {
  vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1,
                     30, 60, -1, -1, 70, -1, -1};
    int i = 0;
  Node *root = nullptr;
  root = buildTree(arr ,i);
  preOrderTraversal(root);
  return 0;
}
