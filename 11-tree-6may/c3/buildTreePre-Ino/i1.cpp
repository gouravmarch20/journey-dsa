#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class TreeNode {
 public:
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val) {
    this->val = val;
    left = NULL;
    right = NULL;
  }
};
TreeNode *buildTree(vector<int> arr, int &i) {
  int val = arr[i];
  ++i;

  if (val == -1) {
    return NULL;
  }

  // s1: create node
  TreeNode *root = new TreeNode(val);
  // s2:

  root->left = buildTree(arr, i);
  // s3:

  root->right = buildTree(arr, i);
  return root;  //^ recursion solve result
}
void levelOrderTraversal(TreeNode *root) {
  queue<TreeNode *> q;
  // inital
  // cout << "-----> " << root->val << endl;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    // A
    TreeNode *temp = q.front();
    // B
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      // C
      cout << temp->val << " ";
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

void convertInorderTree(TreeNode *root, vector<int> &inorder) {
  if (root == nullptr) {
    return;
  }

  convertInorderTree(root->left, inorder);
  inorder.push_back(root->val);
  convertInorderTree(root->right, inorder);
}

int main() {
  vector<int> arr = {5, 1, 3, -1, -1, 4, -1, -1, 2, -1, -1};
  int i = 0;

  TreeNode *root = nullptr;
  root = buildTree(arr, i);
  vector<int> inorder;
  // levelOrderTraversal(root);
  convertInorderTree(root , inorder);

  return 0;
}
