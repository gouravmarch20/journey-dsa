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
Node *buildTree(vector<int> arr, int &i)
{
    int data = arr[i];
    ++i;
    // cout << "--> enter data  " << data <<" " << i << endl;
    // cin >> data;
    // check data value
    if (data == -1)
    {
        return NULL;
    }

    // s1: create node
    Node *root = new Node(data);
    // s2:
    cout << "data for LEFT part of " << data << " node " << endl;
    root->left = buildTree(arr, i);
    // s3:
    cout << "data for RIGHT part of " << data << " node " << endl;
    root->right = buildTree(arr, i);
    return root; //^ recursion solve result
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    // inital
    // cout << "-----> " << root->data << endl;
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
    // vector<int> arr = {20, 30, 50, -1, -1, 40, -1, -1, 100, -1, -1};
        vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1,
                     30, 60, -1, -1, 70, -1, -1};
    int i = 0;

    Node *root = nullptr;
    root = buildTree(arr , i );
    cout << "level wise travel "<<endl;
    levelOrderTraversal(root);

    return 0;
}
