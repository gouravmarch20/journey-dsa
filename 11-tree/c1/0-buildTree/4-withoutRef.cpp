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

pair<Node *, int> buildTree(vector<int> arr, int i) {
  int data = arr[i];
  ++i;
  cout << "###" << data << " " << i << endl;
  // check data value
  if (data == -1) {
    // cout << "---" << endl;

    return make_pair(nullptr, i);  //~ Return nullptr and updated index by 1 
  }

  // Create root node
  Node *root = new Node(data);

  // Build left and right subtrees
  //
  // cout << "data for LEFT part of " << arr[i - 1] << " node " << endl;
  pair<Node *, int> leftSubtree = buildTree(arr, i);
  root->left = leftSubtree.first;

  // s3:
  // cout << "data for RIGHT part of " << arr[leftSubtree.second] << " node " <<
  // endl;
  pair<Node *, int> rightSubtree =
      buildTree(arr, leftSubtree.second);  // ~ using i index latest of left

  root->right = rightSubtree.first;

  return make_pair(
      root,
      rightSubtree.second);  // ~ returning i index latest -> right 
}

int main() {
  vector<int> arr = {10, 30, 50, -1, -1, 40, -1, -1, 100, 5, -1, -1, -1};
  Node *root = nullptr;
  int i = 0;
  pair<Node *, int> result = buildTree(arr, i);
  root = result.first;

  return 0;
}
