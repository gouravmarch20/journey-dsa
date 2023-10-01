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
  if (!root) {
    return;
  }

  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    int levelSize = q.size();  // Number of nodes at this level

    for (int i = 0; i < levelSize; i++) {
      Node* temp = q.front();
      q.pop();

      if (temp) {
        cout << temp->data << " ";
        q.push(temp->left);
        q.push(temp->right);
      } else {
        cout << "null ";
      }
    }

    cout << endl;  // Move to the next level
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

Node* buildTreeFormPreOrderInorder(int inOrder[], int preOrder[], int size,
                                   int& preIndex, int inOrderStartIndex,
                                   int inOrderEndIndex) {
  // Base case
  if (preIndex >= size || inOrderStartIndex > inOrderEndIndex) {
    return NULL;
  }

  // Create the root node using the current element from the preorder traversal
  int element = preOrder[preIndex++];
  Node* root = new Node(element);

  // Find the position of the element in the inorder traversal
  int position = findPosition(inOrder, size, element);

  // Recursively build the left and right subtrees
  root->left = buildTreeFormPreOrderInorder(inOrder, preOrder, size, preIndex,
                                            inOrderStartIndex, position - 1);
  root->right = buildTreeFormPreOrderInorder(inOrder, preOrder, size, preIndex,
                                             position + 1, inOrderEndIndex);

  return root;
}

int main() {
  int inorder[] = {9, 3, 15, 20, 7};
  int preorder[] = {3, 9, 20, 15, 7};
  int size = 5;  // Corrected size
  int preIndex = 0;
  int inorderStart = 0;
  int inorderEnd = size - 1;
  cout << "Building tree..." << endl;
  Node* root = buildTreeFormPreOrderInorder(inorder, preorder, size, preIndex,
                                            inorderStart, inorderEnd);
  cout << "Printing level order traversal:" << endl;
  levelOrderTraversal(root);

  return 0;
}
