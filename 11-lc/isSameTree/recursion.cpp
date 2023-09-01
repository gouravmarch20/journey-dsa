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

bool isSameTree(TreeNode* p, TreeNode* q) {
  if (p == NULL && q == NULL) {
    return true;
  }
  //^   M1: not able to think
  if (p == NULL || q == NULL) {
    return false;
  }
  bool isSame = (p->val == q->val);
  //   ^ M2: wrong typo p ki position mai k
  //   ^ M3: wrong left right typo
  bool isSameLeft = isSameTree(p->left, q->left);
  bool isSameRight = isSameTree(p->right, q->right);
  //
  return (isSame && isSameLeft && isSameRight);
}
int main() {
  // Build the main tree [3,4,5,1,2]
  TreeNode* mainRoot = new TreeNode(5);
  mainRoot->left = new TreeNode(4);
  mainRoot->right = new TreeNode(5);
  mainRoot->left->left = new TreeNode(1);
  mainRoot->left->right = new TreeNode(2);

  // Build the subtree [4,1,2]
  TreeNode* subtreeRoot = new TreeNode(4);
  subtreeRoot->left = new TreeNode(1);
  subtreeRoot->right = new TreeNode(2);
  //
  bool result = isSameTree(mainRoot, subtreeRoot);
  if (result) {
    cout << "The subtree is part of the main tree." << endl;
  } else {
    cout << "The subtree is not part of the main tree." << endl;
  }

  return 0;
}
