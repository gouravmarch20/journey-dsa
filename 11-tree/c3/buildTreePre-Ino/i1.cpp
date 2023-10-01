#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

class Node {
 public:
  int data;
  Node* left;
  Node* right;
  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};
void levelOrderTraversal(Node* root) {
  queue<Node*> q;
  // inital
  // cout << "-----> " << root->data << endl;
  q.push(root);
  q.push(NULL);  //? putting null for new line marking
  while (!q.empty()) {
    // A
    Node* temp = q.front();
    // B
    q.pop();

    if (temp == NULL) {
      cout << endl;
      if (!q.empty())  
      // ? it's grantee that queue will only only empty when tree ended --> each
      // node have 2 child in queue & we keep push them
      {
        q.push(NULL);
      }
    } else {
      // C
      cout << temp->data << " ";
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

int findPosition(int arr[], int n, int element) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == element) {
      return i;
    }
  }
  return -1;
}
// size : to avoid going out
// index : preorder root access
// inorder start -> left side of root
// inorder end -> right side of root
Node* buildTreeFormPreOrderInorder(int inOrder[], int preOrder[], int size,
                                   int& preIndex, int inOrderStartIndex,
                                   int inOrderEndIndex) {
  // base case ->
  if (preIndex >= size || inOrderStartIndex > inOrderEndIndex) {
    return NULL;
  }
  //   step1: create root by preorder preIndex
  int element = preOrder[preIndex++];  //^ increment preIndex as ref var
  Node* root = new Node(element);
  //   step2 : find postion center for inorder
  int position = findPosition(inOrder, size, element);
  //   step3: root left solve
  root->left = buildTreeFormPreOrderInorder(inOrder, preOrder, size, preIndex,
                                            inOrderStartIndex, position - 1);
  root->right = buildTreeFormPreOrderInorder(inOrder, preOrder, size, preIndex,
                                             position + 1, inOrderEndIndex);
  return root;
}

int main() {
  int inorder[] = {40, 20, 50, 10, 60, 30};
  int preorder[] = {10, 20, 40, 50, 30, 60};
  int size = 6;
  int preIndex = 0;
  int inorderStart = 0;
  int inorderEnd = size - 1;
  cout << "building tree " << endl;
  Node* root = buildTreeFormPreOrderInorder(inorder, preorder, size, preIndex,
                                            inorderStart, inorderEnd);
  cout << "print level order traversal  " << endl;
  levelOrderTraversal(root);

  return 0;
}
