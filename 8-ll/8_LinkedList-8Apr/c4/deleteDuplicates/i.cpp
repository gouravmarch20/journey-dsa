#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *curr;
    ListNode *next;
    ListNode()
    {
        this->val = 0;
        this->curr = NULL;
        this->next = NULL;
    }
    ListNode(int val)
    {
        this->val = val;
        this->curr = NULL;
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
    newNode->curr = tail;

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

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *curr = head;
    //? if last not duplicate :    curr->next of last node remain uncheck --> no need to check already linked connect node
    //? if last duplicate  :  skiped
    while (curr != NULL && curr->next != NULL)
    {

        if (curr->val == curr->next->val)
        {
            ListNode *temp = curr->next;
            curr->next = curr->next->next;
            //
            temp->next = NULL;
            delete (temp); //^ remove unused node
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

int main()
{

    vector<int> arr1 = {1, 1};

    ListNode *list1 = create_linked_list(arr1, arr1.size());

    print(list1);
    ListNode *res = deleteDuplicates(list1);
    print(res);

    return 0;
}
