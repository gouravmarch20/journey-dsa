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
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // inital
    q.push(root);
    q.push(NULL);//M 
    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            // C
            cout << temp->data << " ";
            // D
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    } 
}

int main()
{
    vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30 , -1 , -1};
    Node *root = nullptr;
    root = buildTree();
    levelOrderTraversal(root);

    return 0;
}
