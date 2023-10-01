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
  Node *left;
  Node *right;

  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};
int index1 = 0;  // Global index1 to keep track of array traversal

Node *buildTree(vector<int> arr) {
  if (index1 >= arr.size() || arr[index1] == -1) {
    index1++;
    return NULL;
  }

  Node *root = new Node(arr[index1]);
  index1++;
  root->left = buildTree(arr);
  root->right = buildTree(arr);

  return root;
}
void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  // inital
  // cout << "-----> " << root->data << endl;
  q.push(root);
  q.push(NULL);  //? putting null for new line marking
  while (!q.empty()) {
    // A
    Node *temp = q.front();
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

int convertSumTree(Node *&root) {
  //
  if (root == NULL) {
    return 0;
  }
  int leftSum = convertSumTree(root->left);
  int rightSum = convertSumTree(root->right);
  //
  int rootData = leftSum + rightSum + root->data;
  root->data = rootData;
  return rootData;
}

int main() {
  vector<int> arr = {10,20 , 40 , -1, -1, 50 , -1, -1, 30 , 60 , -1, -1, 70 , -1, -1};
  Node *root = buildTree(arr);  // Pass the array to build the tree
  cout << "-------> print  tree << ------" << endl;
  levelOrderTraversal(root);

  convertSumTree(root);
  cout << "-------> print sum tree << ------" << endl;
  levelOrderTraversal(root);

  // for (int i = 0; i < result.size(); i++) {
  //   for (int j = 0; j < result[i].size(); j++) {
  //     cout << result[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}
