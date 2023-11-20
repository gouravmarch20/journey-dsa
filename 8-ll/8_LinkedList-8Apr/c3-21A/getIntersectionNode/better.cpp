#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int data;
    ListNode *prev;
    ListNode *next;
    ListNode()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    ListNode(int data)
    {
        this->data = data;
        this->prev = NULL;
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
int getLength(ListNode *&head)
{
    int c = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        c++;
    }
    return c;
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
ListNode *create_linked_list(vector<int> arr, int n)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    for (int i = 0; i < n; i++)
    {
        ListNode *new_node = new ListNode(arr[i]);
        if (!head)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }

    return head;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
// void getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int a = getLength(headA);
    int b = getLength(headB);
    int diff = abs(a - b);
    // !miss b>a case --> else block
    if (a < b)
    {
        while (diff--)
        {
            headB = headB->next; //! m1: write  headA = headA->next;
        }
    }
    else
    {
        while (diff--)
        {
            headA = headA->next;
        }
    }
    while (headA && headB)
    {
        if (headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}

int main()
{

    vector<int> arr1 = {10, 30, 50};
    vector<int> arr2 = {3, 5};
    vector<int> commonArr = {11, 12};
    ListNode *list1 = create_linked_list(arr1, arr1.size());
    ListNode *list2 = create_linked_list(arr2, arr2.size());
    ListNode *commonNode = create_linked_list(commonArr, commonArr.size());

    ListNode *list1_tail = list1;
    while (list1_tail->next)
    {
        list1_tail = list1_tail->next;
    }

    list1_tail->next = commonNode;
    ListNode *list2_tail = list2;
    while (list2_tail->next)
    {
        list2_tail = list2_tail->next;
    }
    list2_tail->next = commonNode;
    print(list1);
    print(list2);

    ListNode *intersection_node = getIntersectionNode(list1, list2);

    print(intersection_node);

    return 0;
}
