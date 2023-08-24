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
int index1 = 0; // Global index1 to keep track of array traversal

Node *buildTree(vector<int> arr)
{
    if (index1 >= arr.size() || arr[index1] == -1)
    {
        index1++;
        return NULL;
    }

    Node *root = new Node(arr[index1]);
    index1++;
    root->left = buildTree(arr);
    root->right = buildTree(arr);

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (root == nullptr)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int levelSize = q.size(); // Number of nodes at the current level

        for (int i = 0; i < levelSize; ++i)
        {
            Node *temp = q.front();
            q.pop();
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }

        cout << endl; // Print a new line after each level
    }
}

int maxHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftNodeHeight = maxHeight(root->left);
    int rightNodeHeight = maxHeight(root->right);
    int ans = max(leftNodeHeight, rightNodeHeight) + 1;
    return ans;
}
int main()
{
    vector<int> arr = {10, 20, 40, -1, -1, 50, -1, -1, 30, -1, 60, 70, -1, -1, -1};
    Node *root = buildTree(arr); // Pass the array to build the tree
    levelOrderTraversal(root);
    cout << "the maximum depth of a tree is -> " << maxHeight(root) << endl;
    return 0;
}
