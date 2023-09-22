#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int data;
    ListNode *prev;
    ListNode *next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(int data, ListNode *&head, ListNode *&tail)
{
    if (head == NULL)
    {
        ListNode *newNode = new ListNode(data);
        head = newNode;
        tail = newNode;
        return;
    }
    ListNode *newNode = new ListNode(data);
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}
bool hasCycle(ListNode *&head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    // !m0: miss if empty length
    if (head == NULL)
    {
        return false;
    }
    // !m1: miss if 1 length

    if (head->next == NULL)
    {
        return false;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast == slow)
        {
            return true;
        }

        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        else
        {
            return false; //! m2 : return true
        }
    }
    return false; //! m3 : false at 2 length while loop break
}
int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;

    insertAtTail(6, head, tail);
    insertAtTail(9, head, tail);
    insertAtTail(12, head, tail);
    insertAtTail(15, head, tail);
    print(head);

    //

    bool res = hasCycle(head);
    cout << res << "the result is " << endl;

    return 0;
}
