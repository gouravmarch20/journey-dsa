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

Node *buildTree(vector<int> arr, int &i) {
  int data = arr[i];
  ++i;
  // cout << "--> enter data  " << data <<" " << i << endl;
  // cin >> data;
  // check data value
  if (data == -1) {
    return NULL;
  }

  // s1: create node
  Node *root = new Node(data);
  // s2:
  //   cout << "data for LEFT part of " << data << " node " << endl;
  root->left = buildTree(arr, i);
  // s3:
  //   cout << "data for RIGHT part of " << data << " node " << endl;
  root->right = buildTree(arr, i);
  return root;  //^ recursion solve result
}

void inorderTraversal(Node *root) {
//   cout << "--> " << (root ? root->data : 0) << endl;
  if (root == NULL) {
    return;
  }
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}

int main() {
//   vector<int> arr = {10, 20, -1, -1, 30, -1, -1};
    vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1,
                       30, 60, -1, -1, 70, -1, -1};
  int i = 0;
  Node *root = nullptr;
  root = buildTree(arr, i);
  inorderTraversal(root);
  return 0;
}
