#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *bottom;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->bottom = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *merge(Node *a, Node *b)
{
    if (a == NULL)
    {
        return b;
    }

    if (b == NULL)
    {
        return a;
    }

    Node *ans = NULL;
    if (a->data < b->data)
    {
        ans = a;
        a->bottom = merge(a->bottom, b);
    }
    else
    {
        ans = b;
        b->bottom = merge(a, b->bottom);
    }

    Node *current = ans;
    // while (current != NULL)
    // {
    //     cout << current->data << " ";
    //     current = current->bottom;
    // }
    // cout <<endl;
    return ans;
}

Node *flatten(Node *root)
{
    if (!root)
    {
        return NULL;
    }

    Node *mergedLL = merge(root, flatten(root->next));

    Node *current = mergedLL;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->bottom;
    }
    cout << endl;

    return mergedLL;
}
int main()
{
    // Creating the linked list
    Node *root = new Node(5);
    root->next = new Node(10);
    root->next->next = new Node(19);
    // root->next->next->next = new Node(28);

    root->bottom = new Node(7);
    root->bottom->bottom = new Node(8);
    root->bottom->bottom->bottom = new Node(30);

    root->next->bottom = new Node(20);

    root->next->next->bottom = new Node(22);
    root->next->next->bottom->bottom = new Node(50);

    // root->next->next->next->bottom = new Node(35);
    // root->next->next->next->bottom->bottom = new Node(40);
    // root->next->next->next->bottom->bottom->bottom = new Node(45);

    // Flattening the linked list
    Node *flattenedList = flatten(root);

    // Printing the flattened linked list
    Node *current = flattenedList;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->bottom;
    }

    return 0;
}
