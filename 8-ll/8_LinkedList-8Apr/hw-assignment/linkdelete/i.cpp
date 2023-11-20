#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int val;
    Node *random;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->random = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *create_linked_list(vector<int> arr, int n)
{
    Node *head = nullptr;
    Node *tail = nullptr;

    for (int i = 0; i < n; i++)
    {
        Node *new_Node = new Node(arr[i]);
        if (!head)
        {
            head = new_Node;
            tail = new_Node;
        }
        else
        {
            tail->next = new_Node;
            tail = new_Node;
        }
    }

    return head;
}

void linkdelete(Node *head, int M, int N)
{

    // M
    if (!head)
        return;

    Node *it = head;
    // M  forgot to- 1
    for (int i = 0; i < M - 1; i++)
    {
        // ^ must pre check
        if (!it)
            return;
        it = it->next;
    }
    if (!it)
        return;

    Node *mThNode = it;
    it = mThNode->next;
    for (int i = 0; i < N; i++)
    {
        if (!it)
            break;

        Node *temp = it->next;
        delete it;
        it = temp;
    }
    mThNode->next = it;

    linkdelete(it, M, N);
}

int main()
{
    vector<int> arr1 = {10, 20, 30, 40, 50, 60, 70, 80};
    Node *list1 = create_linked_list(arr1, arr1.size());
    int m = 3; // avoid
    int n = 0; // delete

    linkdelete(list1, m, n);
    print(list1);
    return 0;
}
