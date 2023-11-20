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
    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    //
    insertAtHead(1, head, tail);
    insertAtHead(3, head, tail);
    insertAtHead(5, head, tail);
    //
    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    return 0;
}
