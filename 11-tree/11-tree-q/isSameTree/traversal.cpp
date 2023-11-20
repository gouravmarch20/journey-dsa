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
void inorder(TreeNode* root, vector<int>& ans) {
  if (root == NULL) {
    ans.push_back(100000);  //^ range give in till 10^4
    return;
  }
  ans.push_back(root->val);
  inorder(root->left, ans);
  inorder(root->right, ans);
}
void preOrder(TreeNode* root, vector<int>& ans) {
  if (root == NULL) {
    ans.push_back(100000);  //^ range give in till 10^4
    return;
  }
  ans.push_back(root->val);
  preOrder(root->left, ans);
  preOrder(root->right, ans);
}
bool isSameTree(TreeNode* p, TreeNode* q) {
  vector<int> inorderP, inorderQ, preOrderP, preOrderQ;
  inorder(p, inorderP);
  inorder(q, inorderQ);
  preOrder(p, preOrderP);
  preOrder(q, preOrderQ);

  if (inorderP == inorderQ && preOrderP == preOrderQ) {
    return true;
  } else {
    return false;
  }
}
int main() {
  vector<int> pArr = {1, 2, 3};
  vector<int> qArr = {1, 2, 3};
  TreeNode* p = buildTreeLevelOrder(pArr);
  TreeNode* q = buildTreeLevelOrder(qArr);
  printTreeLevelOrder(p);
  isSameTree(p, q);

  return 0;
}
