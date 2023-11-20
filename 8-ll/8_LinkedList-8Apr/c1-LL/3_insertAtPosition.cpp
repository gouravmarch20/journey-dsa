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
int getLength(Node *&head)
{
    int c = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }
    return c;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // step1 : create node
    Node *newNode = new Node(data);
    // step2 : connect with tail

    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode; //? Update tail to the new node.
    }
}
void insertAtHead(Node *&head, Node *&tail, int data)
{

    Node *newNode = new Node(data);
    newNode->next = head;

    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}
void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // ^ use of greater than sign -> more than LL length then -->  insert at last ,and update tail
    //? this case also handle by middle code --> no segment fault -> null assigned in class 
    // if (position >= getLength(head))
    // {
    //     insertAtTail(head, tail, data);
    //     return;
    // }
    //? in between head , tail
    int i = 1;
    // step1 : create new node
    Node *newNode = new Node(data);
    Node *prev = head;
    // step2 : find the position (prev ,curr)
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    // step3:
    newNode->next = curr;
    // step4:
    prev->next = newNode;
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

    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    //
    printLL(head);
    cout << "head  " << head->data << " tail  " << tail->data << endl;
    //? middle 
    // insertAtPosition(101, 1, head, tail);
    // printLL(head);
    // cout << "head  " << head->data << " tail  " << tail->data << endl;

    //?more than LL length
    insertAtPosition(102, 3, head, tail);
    printLL(head);
    cout << "head  " << head->data << " tail  " << tail->data << endl;

    return 0;
}
