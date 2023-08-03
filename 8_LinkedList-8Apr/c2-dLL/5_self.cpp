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
void deleteAtPosition(int position, Node *&head, Node *&tail)
{
    //! m1 :  missing head is null case
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return;
    }
    //! m2: miss single node case
    if (head->next == NULL)
    {
        // delete head;//^ head not delete --> it value ko remove first
        Node *temp = head;
        head == NULL;
        tail == NULL;
        delete temp;
        return;
    }

    // first
    if (position == 0)
    {
        Node *temp = head;
        Node *curr = temp->next;
        //
        curr->prev = NULL;
        //
        head = temp->next;
        //
        temp->next = NULL;
        delete temp;
        cout << "---90" << endl;

        return;
    }
    if (position == getLength(head) - 1)
    {
        cout << "hello" << endl;
        cout << "---" << tail->data << endl;
        Node *temp = tail;
        tail = temp->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    //
    prev->next = curr->next;
    curr->next->prev = prev;//^ too possible

    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
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
    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;
    //
    // deleteAtPosition(0, head, tail);//?head

    // deleteAtPosition(2, head, tail); //? tail
    deleteAtPosition(1, head, tail);//? middle
    deleteAtPosition(1, head, tail);//? middle
    deleteAtPosition(1, head, tail);//? tail

    cout << "head " << head->data << " tail " << tail->data << endl;

    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    return 0;
}
