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

void insertAtTail(int data, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}
Node *reverseKGroup(Node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    // step1: reverse first k nodes
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int c = 0;
    while (c < k)
    {
        forward = curr->next; //! to check

        curr->next = prev;
        prev = curr;
        curr = forward;
        // forward = curr->next;//! not same
        c++;
    }
    // step2: recursive call--> solve all

    // step3: head -> next ==> recursion ans
    if (forward != NULL)
    {
        // ^
        head->next = reverseKGroup(forward, k);
    }
    // step 4: return head of modified LL
    return prev;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(6, head, tail);
    insertAtTail(9, head, tail);
    insertAtTail(12, head, tail);
    insertAtTail(15, head, tail);
    insertAtTail(17, head, tail);
    insertAtTail(19, head, tail);
    print(head);

    //
    int k = 2;

    Node *res = reverseKGroup(head, k);
    print(res);

    return 0;
}
