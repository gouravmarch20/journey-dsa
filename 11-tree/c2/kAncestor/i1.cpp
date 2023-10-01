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
  Node* left;
  Node* right;
  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
bool kthAncestor(Node* root, int & k,int p) {
  // base case
  if (root == NULL) {
    return false;
  } 
  if (root->data == p) {
    return true;  // NOTE -> it return true , if found
  }
  bool leftAns = kthAncestor(root->left, k, p);
  bool rightAns = kthAncestor(root->right, k, p);
  //? only run when one true 
  if (leftAns || rightAns) {
    k--;
    if (k == 0) {
      cout << " the ans is " << root->data << endl;
    }
  }
  return leftAns || rightAns;  // NOTE -> if return nothing / false --> k-- case
                               // not fullfil
}
Node* buildTree(vector<int> arr, int& i) {
  int data = arr[i];
  ++i;

  if (data == -1) {
    return NULL;
  }

  Node* root = new Node(data);
  root->left = buildTree(arr, i);
  root->right = buildTree(arr, i);
  return root;  //^ recursion solve result
}

int main() {
  Node* root = nullptr;
  vector<int> arr = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
  int i = 0;

  int k = 1;
  int p = 4;
  root = buildTree(arr, i);  //? return new tree
  kthAncestor(root, k, p);

  return 0;
}
