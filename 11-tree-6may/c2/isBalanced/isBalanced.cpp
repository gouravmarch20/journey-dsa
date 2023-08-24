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
vector<vector<int> > levelOrderTraversal(TreeNode *root) {
  //
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

// ~ give maximum height of current node
int getHeight(TreeNode *root) {
  if (root == NULL) {
    return 0;
  }

  int leftHeight = getHeight(root->left);
  int rightHeight = getHeight(root->right);
  int ans = 1 + max(leftHeight, rightHeight);

  return ans;
}
bool isBalanced(TreeNode *root) {
  // ^ root end means -> current root all case valid
  if (root == NULL) {
    return true;
  }
  int leftHeight = getHeight(root->left);
  int rightHeight = getHeight(root->right);
  int diff = abs(leftHeight - rightHeight);
  //
  bool isCurrNodeValid = (diff <= 1);
  //   recursion task
  bool leftAns = isBalanced(root->left);
  bool rightAns = isBalanced(root->right);
  cout << root->val << " " << isCurrNodeValid << " " << leftAns << " "
       << rightAns << endl;
  if (isCurrNodeValid && leftAns && rightAns) {
    return true;
  } else {
    return false;
  }
}

int main() {
  vector<int> arr = {7, 10, 18, 20, -1, -1, -1, -1, 12, -1, -1};
  TreeNode *root = buildTree(arr);  // Pass the array to build the tree

  // ~ test tree structure
  // levelOrderTraversal(root);
  // vector<vector<int> > result = levelOrderTraversal(root);
  // for (int i = 0; i < result.size(); i++) {
  //   for (int j = 0; j < result[i].size(); j++) {
  //     cout << result[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  bool res = isBalanced(root);
  if (res) {
    cout << " balanced tree " << endl;
  } else {
    cout << " not balance  tree  as each node diff not less than 1 " << endl;
  }

  return 0;
}
