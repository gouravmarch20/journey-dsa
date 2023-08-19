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
    //
    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    root->left = buildTree(arr, i);

    root->right = buildTree(arr, i);
    return root;
}
void levelOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return; // Handle the case of an empty tree
    }
    queue<Node *> q;

    // root value assign
    q.push(root);
    q.push(NULL); //^ why

    //
    while (!q.empty())
    {
        // A:
        Node *temp = q.front();
        // B:
        q.pop();
        // C:
        if (temp == NULL)
        {
            // go to the next line
            cout << endl;
            // Marking for next level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            // left child exists
            if (temp->left)
            {
                q.push(temp->left);
            }
            // right child exists
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    vector<int> arr = {20, 30, 50, -1, 60, -1, -1, 40, -1, -1, 100, -1, -1};
    Node *root = NULL;
    int i = 0;
    root = buildTree(arr, i);

    levelOrderTraversal(root);
    return 0;
}
