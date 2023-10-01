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
    cout << "-----> " << root->data << endl;
    q.push(root);
    q.push(NULL);//? putting null for new line marking
    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())//! if queue is not empty then only push null, avoid infinite loop --> if empty queue means the end of tree 
            // ? it's grantee that queue will only only empty when tree ended --> each node have 2 child in queue & we keep push them
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
    vector<int> arr = {20, 30, 50, -1, -1, 40, -1, -1, 100, -1, -1};
    int i = 0;

    Node *root = nullptr;
    root = buildTree();
    cout << "level wise travel "<<endl;
    levelOrderTraversal(root);

    return 0;
}
