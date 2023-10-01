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
bool match(TreeNode *root1, TreeNode *root2) {
  //
  if (root1 != NULL && root2 != NULL) {
    bool a = match(root1->left, root2->right);
    bool b = match(root1->right, root2->left);
    if (root1->val == root2->val && a && b) {
      return true;
    } else {
      return false;
    }

  } else if (root1 == NULL && root2 == NULL) {
    return true;
  } else {
    return false;
  }
}
bool isSymmetric(TreeNode *root) {
  // NOTE it's not recursion
  if (root == NULL) {
    return true;
  }
  return match(root->left, root->right);
};
int main() {
  vector<int> arr = {1, 2, 3, -1, -1, 4, -1, -1, 2, 4, -1, -1, 3, -1, -1};
  int i = 0;

  TreeNode *root = nullptr;
  root = buildTree(arr, i);
  cout << isSymmetric(root) << endl;

  return 0;
}
