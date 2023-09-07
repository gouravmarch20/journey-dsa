#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
// TODO: DRY RUN
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
      if (!q.empty())  //! if queue is not empty then only push null, avoid
                       //! infinite loop --> if empty queue means the end of
                       //! tree
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
// index : postorder root access
// inorder start -> left side of root
// inorder end -> right side of root
Node* buildTreeFormPostOrderInorder(int inOrder[], int postOrder[],
                                    int& postIndex, int size, int inOrderStart,
                                    int inOrderEnd) {
  // base case ->
  if (postIndex < 0 || inOrderStart > inOrderEnd) {
    return NULL;
  }
  //   step1: create root by postorder postIndex
  int element = postOrder[postIndex];  //^ increment postIndex as ref var
  postIndex--;
  Node* root = new Node(element);
  //   step2 : find postion center for inorder
  int position = findPosition(inOrder, size, element);
  //   step3: root left solve
  root->right = buildTreeFormPostOrderInorder(inOrder, postOrder, postIndex,
                                              size, position + 1, inOrderEnd);
  root->left = buildTreeFormPostOrderInorder(inOrder, postOrder, postIndex,
                                             size, inOrderStart, position - 1);
  return root;
}

int main() {
  int inorder[] = {40, 20, 10, 50, 30, 60};
  int postorder[] = {40, 20, 50, 60, 30, 10};
  int size = 6;
  int postIndex = size - 1;
  int inorderStart = 0;
  int inorderEnd = size - 1;
  cout << "building tree " << endl;
  Node* root = buildTreeFormPostOrderInorder(inorder, postorder, postIndex,
                                             size, inorderStart, inorderEnd);
  cout << "print level order traversal  " << endl;
  levelOrderTraversal(root);

  return 0;
}
