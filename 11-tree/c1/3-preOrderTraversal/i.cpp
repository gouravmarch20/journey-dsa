#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>
#include <deque>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int index = 0; // Global index to keep track of array traversal

Node *buildTree(vector<int> arr) 
{
    if (index >= arr.size() || arr[index] == -1)
    {
        index++;
        return NULL;
    }

    Node *root = new Node(arr[index]);
    index++;
    root->left = buildTree(arr);
    root->right = buildTree(arr);

    return root;
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";

    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

int main()
{
    // vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30, 60, -1, -1, 70, -1, -1};

    vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30, 60, -1, -1, 70, -1, -1};

    Node *root = nullptr;
    root = buildTree(arr);
    preOrderTraversal(root);
    return 0;
}
