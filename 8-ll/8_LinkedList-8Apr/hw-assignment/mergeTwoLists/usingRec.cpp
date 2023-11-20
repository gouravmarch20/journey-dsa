#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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

Node *mergeList(Node *a, Node *b)
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
        a->next = mergeList(a->next, b);
    }
    else
    {
        ans = b;
        b->next = mergeList(a, b->next);
    }
    return ans; 
}
Node *create_linked_list(vector<int> arr, int n)
{
    Node *head = nullptr;
    Node *tail = nullptr;

    for (int i = 0; i < n; i++)
    {
        Node *new_node = new Node(arr[i]);
        if (!head)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }

    return head;
}

int main()
{
    vector<int> arr1 = {1, 9, 15, 20};
    vector<int> arr2 = {4, 6, 18, 19};

    Node *list1 = create_linked_list(arr1, arr1.size());
    Node *list2 = create_linked_list(arr2, arr2.size());
    Node *res = mergeList(list1, list2);
    print(res);
    return 0;
}
