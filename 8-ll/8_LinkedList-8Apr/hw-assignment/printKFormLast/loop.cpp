#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int value;
    ListNode *prev;
    ListNode *next;
    ListNode(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void print(ListNode *&head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(int value, ListNode *&head, ListNode *&tail)
{
    if (head == NULL)
    {
        ListNode *newNode = new ListNode(value);
        head = newNode;
        tail = newNode;
        return;
    }
    ListNode *newNode = new ListNode(value);
    newNode->prev = tail;

    tail->next = newNode;
    tail = newNode;
}

void getKNodeFromLast(ListNode *head, int &positionFromTail, int &ans)
{
    ListNode *temp = head;
    int c = 0;
    while (temp)
    {
        c++;
        temp = temp->next;
    }
    int positionFormHead = c - positionFromTail - 1;//M miss -1 ==> length counting start with 1 so need -1 
    int i = 0;
    temp = head;

    while (i < positionFormHead)
    {
        i++;
        temp = temp->next;
    }
    ans = temp->value;
}
void getNode(ListNode *head, int positionFromTail)
{
    int ans = -1;
    getKNodeFromLast(head, positionFromTail, ans);
    cout << ans;
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
    int positionFromTail = 0;

    getNode(head, positionFromTail);
    // print(res);

    return 0;
}
