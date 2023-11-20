#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
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
int getLength(Node *&head)
{
    int c = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
}
void insertAtHead(int data, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(int data, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}
void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (position == 0)
    {
        insertAtHead(data, head, tail);
        return;
    }
    if (position == getLength(head))
    {
        insertAtTail(data, head, tail);
        return;
    }
    Node *prev = head;
    Node *newNode = new Node(data);
    int i = 1;

    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // 
    newNode->next = curr;
    newNode->prev = prev;
    prev->next = newNode;
    curr->prev = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //
    insertAtHead(10, head, tail);
    insertAtTail(20, head, tail);
    insertAtTail(30, head, tail);
    insertAtTail(40, head, tail);
    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    // insertAtPosition(0, 55, head, tail); //? head
    // insertAtPosition(5, 55, head, tail); //? tail
    insertAtPosition(401, 3, head, tail);

    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;
    return 0;
}
