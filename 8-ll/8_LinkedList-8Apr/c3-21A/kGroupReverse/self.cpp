#include <iostream>
#include <vector>
// TODO: GOD DRY RUN
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
ListNode *reverseKGroupRec(ListNode *&head, int k)
{

    ListNode *temp = head;
    int count = 0;
    //! counting new LL
    while (temp != NULL && count < k)
    {
        temp = temp->next;
        count++;
    }
    // ! imp to stop --> base case
    if (count < k)
    {
        // If the remaining nodes are less than k, no need to reverse
        return head;
    }


    int i = 0;
    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *forward;
    while (i < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        i++;
    }
    if (forward != NULL)
    {
        head->next = reverseKGroupRec(forward, k);
    }
    return prev;
}

int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;

    insertAtTail(6, head, tail);
    insertAtTail(9, head, tail);
    insertAtTail(12, head, tail);
    insertAtTail(15, head, tail);
    insertAtTail(17, head, tail);
    insertAtTail(19, head, tail);
    print(head);

    //
    int k = 2;

    ListNode *res = reverseKGroupRec(head, k);
    print(res);

    return 0;
}
