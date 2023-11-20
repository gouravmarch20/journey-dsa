#include <iostream>
#include <vector>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void printLL(Node * head)
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
    Node *first = new Node(4);
    Node *second = new Node(9);
    Node *third = new Node();
    Node *fourth = new Node();
    // connect
    first->next = second;
    second->next = third;
    third->next = fourth;
    printLL(first);

        return 0;
}
