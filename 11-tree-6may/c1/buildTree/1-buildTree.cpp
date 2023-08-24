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
    cout << "--> enter data  " << data <<" " << i << endl;
    // cin >> data;
    // check data value
    if (data == -1)
    {
        return NULL;
    }

    // s1: create
    Node *root = new Node(data);
    // s2:
    cout << "data for LEFT part of " << data << " node " << endl;
    root->left = buildTree(arr, i);
    // s3:
    cout << "data for RIGHT part of " << data << " node " << endl;
    root->right = buildTree(arr, i);
    return root; //^ recursion solve result
}
int main()
{
    // 20 , 30 , 50 , -1 , 60 , -1,-1,40,-1,-1,100,-1,-1
    vector<int> arr = {20, 30, 50, -1, -1, 40, -1, -1, 100, -1, -1};
    Node *root = NULL;
    int i = 0;
    root = buildTree(arr, i);
    return 0;
}
