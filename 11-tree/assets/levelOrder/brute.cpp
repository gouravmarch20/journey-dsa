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
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
int index1 = 0;  // Global index1 to keep track of array traversal

TreeNode *buildTree(vector<int> arr) {
  if (index1 >= arr.size() || arr[index1] == -1) {
    index1++;
    return NULL;
  }

  TreeNode *root = new TreeNode(arr[index1]);
  index1++;
  root->left = buildTree(arr);
  root->right = buildTree(arr);

  return root;
}

int maxHeight(TreeNode *root) {
  if (root == NULL) {
    return 0;
  }
  int leftNodeHeight = maxHeight(root->left);
  int rightNodeHeight = maxHeight(root->right);
  cout << "kim " << leftNodeHeight << " " << rightNodeHeight << endl;
  int ans = max(leftNodeHeight, rightNodeHeight) + 1;
  return ans;
}
int diameter(TreeNode *root) {
  if (root == NULL) {
    return 0;
  }
  // Recursively calculate the diameter of the left and right subtrees
  int op1 = diameter(root->left);
  int op2 = diameter(root->right);
  //
  int op3 = maxHeight(root->left) + maxHeight(root->right);
  int ans = max(op1, max(op2, op3));
  return ans;
}

int main() {
  vector<int> arr = {4 , 5 , 7 , -1 , -1 , 9 , -1 , -1 , 1 , -1 , -1};
  TreeNode *root = buildTree(arr);  // Pass the array to build the tree

  cout << "the maximum depth of a tree is -> " << diameter(root) - 1 << endl;
  return 0;
}
