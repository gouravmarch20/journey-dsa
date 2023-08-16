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

int main()
{

    vector<int> arr1 = {4, 1, 5, 7};
    vector<int> arr2 = {5, 6, 1 , 7};

    ListNode *list1 = create_linked_list(arr1, arr1.size());
    ListNode *list2 = create_linked_list(arr2, arr2.size());


    while (list1)//^ curr 
    {
        cout << list1->data << " ";
        list1 = list1->next;
    }
    cout << endl;
    while (list2->next)//^ prev : check 1 step  ahead 
    {
        cout << list2->data << " ";
        list2 = list2->next;
    }
    cout << endl;

    return 0;
}
