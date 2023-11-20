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
void insertAtPosition( int data,int position, Node *&head, Node *&tail)
{
    //^ ll empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        head = newNode;
        return;
    }

    //^^ HOW:
    if (position == 1)
    {
        insertAtHead(data, head, tail);
    }
    // tail case
    int len = getLength(head);
    //R:: WHY == NOT >=
    if (position == len)
    {
        insertAtTail(data, head, tail);
    }
    // in between head & tail

    int i = 1; //? if 0 head handled
    Node *prev = head;
    Node *newNode = new Node(data);
    // step1 : find previous , current
    // ^^ why -1
    while (i < position - 1)
    {
        prev = prev->next; //! m1 >> prev ki head wrote
        i++;
    }
    // step2: create a new node
    Node *curr = prev->next;
    // step3 :
    prev->next = newNode;
    newNode->prev = prev;
    
    newNode->next = curr; 
    curr->prev = newNode;

}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //
    insertAtHead(5, head, tail);
    insertAtTail(8, head, tail);
    insertAtTail(15, head, tail);
// B::
    // insertAtPosition(401, 3, head, tail);//FIXME EQUAL CASE
    insertAtPosition(402, 4, head, tail);// EXTRA REPET 

    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    return 0;
}
