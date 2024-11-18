#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

void levelOrderTraversal(Node* root) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL); // Marker to indicate end of level

    vector<vector<int>> result;  // To store level order traversal

    vector<int> currentLevel;  // To store nodes at the current level
    
    while (!q.empty()) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            // End of current level, push currentLevel to result
            result.push_back(currentLevel);
            currentLevel.clear();  // Reset current level

            if (!q.empty()) {
                q.push(NULL); // Add marker for next level
            }
        }
        else {
            // Add the current node's value to the current level
            currentLevel.push_back(front->data);

            // Push left and right children into the queue if they exist
            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }

    // Now print the level order traversal stored in result
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Creating the binary tree
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    
    // Call levelOrderTraversal to print the result
    levelOrderTraversal(root);

    return 0;
}
