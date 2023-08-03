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
        this->prev = NULL;
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
Node *reverse(Node *&prev, Node *&curr)
{
    if (curr == NULL)
    {

        return prev;//^return prev
    }
    //
    Node *forward = curr->next;
    curr->next = prev;
    return reverse(curr, forward);
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;


    insertAtTail(6, head, tail);
    insertAtTail(9, head, tail);
    insertAtTail(12, head, tail);
    insertAtTail(15, head, tail);
    print(head);

    //
    Node *prev = NULL;
    Node *curr = head;

    Node *res = reverse(prev, curr);



    return 0;
}
