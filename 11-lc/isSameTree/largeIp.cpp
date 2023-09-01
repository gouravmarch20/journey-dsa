#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class TreeNode {
 public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
  if (p == nullptr && q == nullptr) {
    return true;
  }
  if (p == nullptr || q == nullptr) {
    return false;
  }
  return (p->val == q->val) && isSameTree(p->left, q->left) &&
         isSameTree(p->right, q->right);
}

bool isSubtree(TreeNode* s, TreeNode* t) {
  if (s == nullptr) {
    return false;
  }
  if (isSameTree(s, t)) {
    return true;
  }
  return isSubtree(s->left, t) || isSubtree(s->right, t);
}

TreeNode* buildTree(const vector<int>& values) {
  if (values.empty()) {
    return nullptr;
  }

  int index = 0;
  TreeNode* root = new TreeNode(values[index++]);
  queue<TreeNode*> nodes;
  nodes.push(root);

  while (!nodes.empty() && index < values.size()) {
    TreeNode* current = nodes.front();
    nodes.pop();

    if (values[index] != -1) {
      current->left = new TreeNode(values[index]);
      nodes.push(current->left);
    }
    index++;

    if (index < values.size() && values[index] != -1) {
      current->right = new TreeNode(values[index]);
      nodes.push(current->right);
    }
    index++;
  }

  return root;
}

int main() {
  vector<int> rootValues = {3, 4, 5, 1, 2};
  vector<int> subRootValues = {4, 1, 2};
  TreeNode* root = buildTree(rootValues);
  TreeNode* subRoot = buildTree(subRootValues);

  bool result = isSubtree(root, subRoot);
  if (result) {
    cout << "The subRoot is a subtree of the root." << endl;
  } else {
    cout << "The subRoot is not a subtree of the root." << endl;
  }

  return 0;
}
