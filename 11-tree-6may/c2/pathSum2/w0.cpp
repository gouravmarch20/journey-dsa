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
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

void solve(TreeNode* root, int targetSum, int currSum, vector<int>  path,
           vector<vector<int>>& ans) {
  if (root == NULL) {
    return;
  }

  if (root->left == NULL &&
      root->right == NULL) {  //^ at leaf node only root ka left , right both
                              // together can be null
    path.push_back(root->val);
      cout << "curr sum " << currSum << " " << endl;

    currSum += root->val;
    if (currSum == targetSum) {
      ans.push_back(path);
    }
    return;
  }

  //   include current node
  path.push_back(root->val);
  currSum += root->val;
  solve(root->left, targetSum, currSum, path, ans);
  solve(root->right, targetSum, currSum, path, ans);
}
//
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
  vector<vector<int>> ans;
  int sum = 0;
  vector<int> path;
  solve(root, targetSum, sum, path, ans);
  return ans;
}
int main() {
  // You can create the binary tree and call the pathSum function here

  TreeNode* root = new TreeNode(5);
  root->left = new TreeNode(4);
  root->right = new TreeNode(8);
  root->left->left = new TreeNode(11);
  root->right->left = new TreeNode(13);
  root->right->right = new TreeNode(4);
  root->left->left->left = new TreeNode(7);
  root->left->left->right = new TreeNode(2);
  root->right->right->left = new TreeNode(5);
  root->right->right->right = new TreeNode(1);

  int target_sum = 22;
  vector<vector<int>> result = pathSum(root, target_sum);
    for (int i = 0; i < result.size(); i++) {
      for (int j = 0; j < result[i].size(); j++) {
          cout << result[i][j]  << " ";
      }
      cout <<endl;
    }

  return 0;
}
