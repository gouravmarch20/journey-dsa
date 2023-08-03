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
    // step1 : create node
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        // step3:  head at starting

        head = newNode;
        tail = newNode;
        return;
    }

    // step 2 : attach new node with -> head(first node)
    newNode->next = head;
    // step3:  head at starting
    head = newNode;
}
void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 45);
    insertAtHead(head, tail, 89);

    printLL(head);

    return 0;
}
