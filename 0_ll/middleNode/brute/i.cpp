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
void findMiddle(Node *&head)
{
    int n = getLength(head);
    int i = 1;
    Node *curr = head;

    if (n & 1)
    {

        n = ((n / 2) + 1);
    }
    else
    {
        n = n / 2;
    }

    while (i < n)
    {
        curr = curr->next;
        i++;
    }
    cout << curr->data;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);

    printLL(head);
    findMiddle(head);

    return 0;
}
