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

Node *buildTree(vector<int> arr, int i)
{
    int data = arr[i];
    ++i;

    if (data == -1)
    {
        return NULL;
    }

    // Step A , B and C
    Node *root = new Node(data);

    root->left = buildTree(arr, i);

    root->right = buildTree(arr, i);

    return root;
}

void inorderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main()
{
    vector<int> arr = {20, 30, 50, -1, 40, -1, -1, -1, -1};
    int i = 0;
    Node *root = nullptr;
    root = buildTree(arr, i);

    return 0;
}
