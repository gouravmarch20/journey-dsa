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
void printTree(vector<vector<int> > result) {
  for (int i = 0; i < result.size(); i++) {
    for (int j = 0; j < result[i].size(); j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}
vector<vector<int> > levelOrderTraversal(TreeNode *root) {
  vector<vector<int> > ans;
  queue<TreeNode *> q;
  if (root == NULL) {
    return ans;
  }

  q.push(root);

  while (!q.empty()) {
    int size = q.size();
    vector<int> ansArrItem;
    while (size > 0) {
      TreeNode *temp = q.front();
      q.pop();
      ansArrItem.push_back(temp->val);
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

int main() {
  vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30, -1, 6, -1, -1};
  TreeNode *root = buildTree(arr);  // Pass the array to build the tree

  vector<vector<int> > result = levelOrderTraversal(root);
  printTree(result);
  return 0;
}
