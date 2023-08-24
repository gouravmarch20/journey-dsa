#include <iostream>
#include <vector>

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
Node *buildTree()
{
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    // Step A , B and C
    Node *root = new Node(data);

    cout << "Enter data for left part of " << data << " node " << endl;
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node " << endl;
    root->right = buildTree();

    return root;
}

int main()
{
    vector<int> arr = {20, 30, 50, -1, 40, -1, -1, -1, -1};
    Node *root = nullptr;
    int i = 0;
    buildTree();

    return 0;
}
