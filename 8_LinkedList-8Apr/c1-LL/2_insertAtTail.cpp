#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // step1 : create node

    Node *newNode = new Node(data);
    if (tail == NULL || head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // step2 : connect with tail
    tail->next = newNode;
    // step3: Update tail point to  new node.
    tail = newNode;
}
void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 45);
    insertAtHead(head, tail, 89);
    insertAtTail(head, tail, 22);
    insertAtTail(head, tail, 11);
    insertAtTail(head, tail, 33);

    printLL(head);

    return 0;
}
