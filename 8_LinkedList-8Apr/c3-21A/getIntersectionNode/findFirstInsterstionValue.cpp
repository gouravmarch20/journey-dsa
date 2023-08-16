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

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
void getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *listA = headA;
    ListNode *listB = headB;
    while (listA && listB)
    {

        listA = listA->next;
        listB = listB->next;
    }

    int l1Count = 0;
    int l2Count = 0;
    if (listA == 0)
    {
        while (listB)
        {
            l2Count++;
            listB = listB->next;
        }
    }
    else
    {
        while (listA)
        {
            l1Count++;
            listA = listA->next;
        }
    }
    listA = headA;
    listB = headB;
    if (l1Count > l2Count)
    {

        int i = 0;
        while (i < l1Count)
        {
            listA = listA->next;
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i < l2Count)
        {
            listB = listB->next;
            i++;
        }
    }

    //

    while (listA && listA->data != listB->data)
    {
        listA = listA->next;
        listB = listB->next;
    }
    if (listA->data == listB->data)
    {
        cout << "write code " << listA->data;
    }
    else
    {
        cout << "not found" << endl;
    }
}

int main()
{

    vector<int> arr1 = {4, 1};
    vector<int> arr2 = {5, 6, 1};
    vector<int> commonArr = {8, 4, 5};
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

    getIntersectionNode(list1, list2);
    // ListNode *intersection_node = getIntersectionNode(list1, list2);

    // print(intersection_node);

    return 0;
}
