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
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

void solve(TreeNode* root, int targetSum, int currSum, vector<int> path,
           vector<vector<int>>& ans) {
  if (root == nullptr) {
    return;
  }

  path.push_back(root->val);
  currSum += root->val;

  if (root->left == nullptr &&
      root->right == nullptr) {  //^ at leaf node only root ka left , right both
                                 //together can be null
    if (currSum == targetSum) {
      ans.push_back(path);
    }
  } else {
    solve(root->left, targetSum, currSum, path, ans);
    solve(root->right, targetSum, currSum, path, ans);
  }

//   path.pop_back();
}
//
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
  vector<vector<int>> ans;
  vector<int> path;
  solve(root, targetSum, 0, path, ans);
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

  return 0;
}
