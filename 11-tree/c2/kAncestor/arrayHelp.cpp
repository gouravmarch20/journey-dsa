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
bool kthAncestor(Node* root, int& k, int target, vector<int>& path) {
  if (root == NULL) {
    return false;
  }
  path.push_back(root->data);// ^ only imp value , next 

  if (root->data == target) {
    return true;
  }
  bool leftAns = kthAncestor(root->left, k, target, path);
  bool rightAns = kthAncestor(root->right, k, target, path);
  //? only run when one true
  path.pop_back();

  return leftAns || rightAns;  // NOTE -> if return nothing / false --> array
                               // operation issue
}
Node* buildTree(vector<int> path, int& i) {
  int data = path[i];
  ++i;

  if (data == -1) {
    return NULL;
  }

  Node* root = new Node(data);
  root->left = buildTree(path, i);
  root->right = buildTree(path, i);
  return root;  //^ recursion solve result
}

int main() {
  Node* root = nullptr;
  vector<int> path = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, -1};
  vector<int> ans;
  int i = 0;

  int k = 1;
  int target = 4;
  root = buildTree(path, i);  //? return new tree
  kthAncestor(root, k, target, path);

  if (k <= path.size()) {
    cout << "The " << k << "th ancestor of node " << target
         << " is: " << path[path.size() - k] << endl;
  } else {
    cout << "There is no " << k << "th ancestor of node " << target << endl;
  }
  // }
  // else {
  //   cout << "Node " << target << " not found in the tree" << endl;
  // }

  return 0;
}
