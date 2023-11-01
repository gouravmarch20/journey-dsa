#include <climits>
#include <utility>

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int v) : val(v), left(nullptr), right(nullptr) {}
};

class Solution {
public:
     pair<bool, int> isMaxHeap(Node* root) {
        if (root == nullptr) {
            return  make_pair(true, INT_MIN);
        }

         pair<bool, int> leftAns = isMaxHeap(root->left);
         pair<bool, int> rightAns = isMaxHeap(root->right);

        if (leftAns.first && rightAns.first && leftAns.second < root->val &&
            rightAns.second < root->val) {
                
            return {true, root->val};
        } else {
            return {false, root->val};
        }
    }
};
