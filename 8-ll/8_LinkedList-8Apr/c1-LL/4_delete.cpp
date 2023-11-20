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
    // TODO: DESTRUCTOR IN DELEATE
    ~Node()
    {
        // int value = this->data;
        // if (this->next != NULL)
        // {
        //     delete next;
        //     this->next = NULL;
        // }

        cout << "-- we have delete " << data << endl;
    }
};
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
    Node *newNode = new Node(data);
    if (tail == NULL || head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (getLength(head) == 0)
    {
        cout << "linked is empty " << endl;
        return;
    }
    //

    if (position == 1)
    {
        cout << "dd" << endl;
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == getLength(head))
    {
        cout << " tail case" << endl;
        int i = 1;
        Node *prev = head;

        // delete temp;
        while (i < getLength(head) - 1) //! miss -1
        {
            prev = prev->next;
            i++;
        }
        Node *tailNode = prev->next;
        prev->next = NULL;
        tail = prev;
        tailNode = NULL;
        delete tailNode;

        return;
    }
    int i = 1;
    Node *prev = head;

    // delete temp;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *toDeleteNode = prev->next;

    // B: test --> second last LL item delete
    if (toDeleteNode->next == NULL)
    {
        prev->next = NULL;
    }
    else
    {
        prev->next = toDeleteNode->next;
    }

    toDeleteNode->next = NULL; //! m2 forgot
    toDeleteNode = NULL;
    delete toDeleteNode;
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

    insertAtTail(head, tail, 11);
    insertAtTail(head, tail, 22);
    insertAtTail(head, tail, 33);
    insertAtTail(head, tail, 44);
    printLL(head);
    cout << "head  " << head->data << " tail  " << tail->data << endl;

    //
    deleteNode(4, head, tail);
    printLL(head);
    cout << "head  " << head->data << " tail  " << tail->data << endl;
    //

    return 0;
}
