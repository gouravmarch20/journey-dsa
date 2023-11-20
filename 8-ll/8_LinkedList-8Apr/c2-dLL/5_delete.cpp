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
void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    // empty
    if (head == NULL)
    {
        cout << "linked list is empty" << endl;
        return;
    }
    // ? single node
    if (head->next == NULL)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    // position 1
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        //
        head->prev = NULL;
        temp->next = NULL; //! forget

        delete temp;
        return;
    }
    //? delete last node
    int len = getLength(head);
    if (position == len)
    {
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;

        tail->next = NULL;
        delete temp;
        return;
    }
    if (position > len)
    {
        cout << "Enter valid length";
        return;
    }
    // ? delete form middle
    // step1 : find left , current , right
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
    }
    Node *curr = left->next;
    Node *right = curr->next;
    // step2
    left->next = right;
    // step3
    right->prev = left;
    // step4:
    curr->prev = NULL;
    curr->next = NULL;
    delete curr;
    return ;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //
    insertAtHead(5, head, tail);
    insertAtTail(8, head, tail);
    insertAtTail(15, head, tail);
    insertAtTail(25, head, tail);
    // deleteAtPosition(0, head, tail);

    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    return 0;
}
