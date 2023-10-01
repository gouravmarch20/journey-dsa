

#include <algorithm>
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
  // Val is the key or the value that
  // has to be added to the val part
  TreeNode(int val) {
    this->val = val;
    // Left and right child for node
    // will be initialized to null
    left = NULL;  // NOTE at last we are making null left , right
    right = NULL;
  }
};

vector<vector<int> > levelOrderTraversal(TreeNode* root) {
  //
  vector<vector<int> > ans;
  queue<TreeNode*> q;  // M1 what queue store
                       //  M2: declared 2 array array temp here

  if (root == NULL) {  // M3: miss this edge case
    return ans;
  }

  q.push(root);
  //

  while (1) {
    int size = q.size();
    if (size == 0) {  // NOTE: our exit case --> whole loop
      return ans;
    }
    vector<int> ansArrItem;  // NOTE here 2d array -> each item declare
    // NOTE use of while loop to iterate till particular level not done
    while (size >
           0) {  //?  greater than 0 --> means  queue is empty at size == 0
      TreeNode* temp = q.front();
      q.pop();
      ansArrItem.push_back(temp->val);
      if (temp->left != NULL) {
        q.push(temp->left);  // M4: queue has not push_back method
      }
      //   if (q->right != NULL) {//M5: q is DS we can only access it's front or
      //   back
      if (temp->right != NULL) {
        q.push(temp->right);
      }
      size--;  // M6 forgot our logic really here
    }
    ans.push_back(ansArrItem);
  }
  return ans;  //? just safe case --> not compulsory
}

int main() {
  /*create root*/
  TreeNode* root = new TreeNode(1);

  /* following is the tree after above statement
  1
  / \
  NULL NULL
  */
  root->left = new TreeNode(2);
  root->right = new TreeNode(7);

  /* 2 and 3 become left and right children of 1
  1
  / \
  2 3
  / \ / \
  NULL NULL NULL NULL
  */
  root->left->left = new TreeNode(4);
  root->left->right = new TreeNode(10);
  //
  root->right->left = new TreeNode(7);
  root->right->right = new TreeNode(9);
  /* 4 becomes left child of 2
          1
  / \
  2	 3
  / \ / \
  4 10 7 9
  / \  / \
  NULL NULL
  */

  vector<vector<int> > arr;
  arr = levelOrderTraversal(root);
    for (int i = 0; i < arr.size(); i++) {
      for (int j = 0; j < arr.size(); j++) {
        cout << arr[i][j] << " ";
      }
    }

  return 0;
}
