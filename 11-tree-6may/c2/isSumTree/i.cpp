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
int index1 = 0;  // Global index1 to keep track of array traversal

Node *buildTree(vector<int> arr) {
  if (index1 >= arr.size() || arr[index1] == -1) {
    index1++;
    return NULL;
  }

  Node *root = new Node(arr[index1]);
  index1++;
  root->left = buildTree(arr);
  root->right = buildTree(arr);

  return root;
}
vector<vector<int> > levelOrderTraversal(Node *root) {
  //
  vector<vector<int> > ans;
  queue<Node *> q;
  if (root == NULL) {
    return ans;
  }

  q.push(root);

  while (!q.empty()) {
    int size = q.size();
    vector<int> ansArrItem;
    while (size > 0) {
      Node *temp = q.front();
      q.pop();
      ansArrItem.push_back(temp->data);
      if (temp->left != NULL) {
        q.push(temp->left);
      }
      if (temp->right != NULL) {
        q.push(temp->right);
      }
      size--;
    }
    ans.push_back(ansArrItem);
  }
  return ans;
}


int isSumTree(Node *&root) {
  //
  if (root == NULL) {
    return 0;
  }
  int leftSum = isSumTree(root->left);
  int rightSum = isSumTree(root->right);
  //
  int rootData = leftSum + rightSum + root->data;
  root->data = rootData;
  return rootData;
}

int main() {
  vector<int> arr = {3, 4, 5, 3, -1, -1, -1, -1, 12, -1, -1};
  Node *root = buildTree(arr);  // Pass the array to build the tree

  // ~ test tree structure
  // levelOrderTraversal(root);
  bool res = isSumTree(root);

  vector<vector<int> > result = levelOrderTraversal(root);
  for (int i = 0; i < result.size(); i++) {
    for (int j = 0; j < result[i].size(); j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
