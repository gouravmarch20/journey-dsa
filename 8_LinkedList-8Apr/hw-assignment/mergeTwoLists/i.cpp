#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
    ListNode()
    {
        this->val = val;
        this->next = NULL;
    }
};
void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(int val, ListNode *&head, ListNode *&tail)
{
    if (head == NULL)
    {
        ListNode *newNode = new ListNode(val);
        head = newNode;
        tail = newNode;
        return;
    }
    ListNode *newNode = new ListNode(val);
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}
ListNode *mergeList(ListNode *list1, ListNode *list2)
{
    ListNode *head = new ListNode(-1);
    ListNode *curr = head;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val <= list2->val)
        {

            curr->next = list1; //^ first see this possible too
            list1 = list1->next;
        }
        else
        {
            curr->next = list2;
            list2 = list2->next;
        }
        curr = curr->next; //! forget->  curr on recent add value
    }
    // ^ just need to connect curr with pending node --> auto access all
    if (list1 != NULL)
    {
        curr->next = list1;
        // list1 = list1->next;
    }
    else
    {
        curr->next = list2;
    }
    return head->next;
}
int main()
{

    ListNode *head = NULL;
    ListNode *tail = NULL;

    insertAtTail(6, head, tail);
    insertAtTail(9, head, tail);
    insertAtTail(12, head, tail);
    // insertAtTail(15, head, tail);
    // insertAtTail(17, head, tail);
    // insertAtTail(19, head, tail);
    print(head);

    //
    ListNode *head2 = NULL;
    ListNode *tail1 = NULL;

    insertAtTail(10, head2, tail1);
    insertAtTail(20, head2, tail1);
    insertAtTail(30, head2, tail1);
    insertAtTail(40, head2, tail1);

    print(head2);

    ListNode *res = mergeList(head, head2);
    print(res);

    return 0;
}
