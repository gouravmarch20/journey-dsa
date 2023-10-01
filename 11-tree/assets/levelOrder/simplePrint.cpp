

#include <algorithm>
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
  // Val is the key or the value that
  // has to be added to the data part
  Node(int val) {
    data = val;
    // Left and right child for node
    // will be initialized to null
    left = NULL;//NOTE at last we are making null left , right
    right = NULL;
  }
};

vector<int> levelOrderTraversal(Node* root) {
  vector<int> ans;
  queue<Node*> q;
  //
  if (root == NULL) {
    return ans;
  }
  q.push(root);

  //
  while (!q.empty()) {
    Node* temp = q.front();
    q.pop();
    ans.push_back(temp->data);
    //NOTE: IT'S BT --> so only 1 left , only 1 right from parent --> so if block not while block
    if (temp->left != NULL) {
      q.push(temp->left);
    }
    if (temp->right != NULL) {
      q.push(temp->right);
    }
  }
  return ans;
}

int main() {
  /*create root*/
  Node* root = new Node(1);

  /* following is the tree after above statement
  1
  / \
  NULL NULL
  */
  root->left = new Node(2);
  root->right = new Node(7);

  /* 2 and 3 become left and right children of 1
  1
  / \
  2 3
  / \ / \
  NULL NULL NULL NULL
  */
  root->left->left = new Node(4);
  root->left->right = new Node(10);
  /* 4 becomes left child of 2
          1
  / \
  2	 3
  / \ / \
  4 10 NULL NULL
  / \
  NULL NULL
  */

  vector<int> arr = levelOrderTraversal(root);
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
