#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class TreeNode {
 public:
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int value) {
    val = value;
    left = nullptr;
    right = nullptr;
  }
};

TreeNode* buildTreeLevelOrder(const vector<int>& elements) {
  if (elements.empty()) {
    return nullptr;
  }

  TreeNode* root = new TreeNode(elements[0]);
  queue<TreeNode*> q;
  q.push(root);
  size_t index = 1;

  while (index < elements.size()) {
    TreeNode* currentNode = q.front();
    q.pop();

    if (elements[index] != -1) {  // Assuming -1 represents NULL
      currentNode->left = new TreeNode(elements[index]);
      q.push(currentNode->left);
    }

    index++;

    if (index < elements.size() && elements[index] != -1) {
      currentNode->right = new TreeNode(elements[index]);
      q.push(currentNode->right);
    }

    index++;
  }

  return root;
}

void printTreeLevelOrder(TreeNode* root) {
  if (root == nullptr) {
    return;
  }

  queue<TreeNode*> q;
  q.push(root);

  while (!q.empty()) {
    size_t levelSize = q.size();

    for (size_t i = 0; i < levelSize; ++i) {
      TreeNode* currentNode = q.front();
      q.pop();
      cout << currentNode->val << " ";

      if (currentNode->left) {
        q.push(currentNode->left);
      }
      if (currentNode->right) {
        q.push(currentNode->right);
      }
    }

    cout << endl;  // a Move to the next line after each level
  }
}

bool match(TreeNode* p, TreeNode* q) {
  if (p == NULL && q == NULL) {
    return true;
  }
  if (p == NULL || q == NULL) {
    return false;
  }
  bool isSameVal = (p->val == q->val);
  bool isSameLeft = match(p->left, q->left);
  bool isSameRight = match(p->right, q->right);
  return (isSameVal && isSameLeft && isSameRight);
}
bool ans = false;

void inorder(TreeNode* root, TreeNode* subRoot) {
  if (root == NULL) {
    return;
  }
  inorder(root->left, subRoot);
  bool x = match(root, subRoot);
  if (x) {
    ans = true;
  }
  inorder(root->right, subRoot);

  //   if (root != NULL) {
  //     inorder(root->left, subRoot);
  //     bool x = match(root, subRoot);
  //     if (x) {
  //       ans = true;
  //     }
  //     inorder(root->right, subRoot);
  //   }
}
bool isSubtree(TreeNode* root, TreeNode* subRoot) {
  inorder(root, subRoot);
  return ans;
}
int main() {
  vector<int> pArr = {3, 4, 5, 1, 2};
  vector<int> qArr = {4, 1, 2};
  TreeNode* p = buildTreeLevelOrder(pArr);
  TreeNode* q = buildTreeLevelOrder(qArr);

  isSubtree(p, q);
  cout << ans << endl;

  return 0;
}
