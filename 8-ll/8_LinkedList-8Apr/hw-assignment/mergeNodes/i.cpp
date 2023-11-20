#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *random;
    ListNode *next;
    ListNode(int val)
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

ListNode *create_linked_list(vector<int> arr, int n)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    for (int i = 0; i < n; i++)
    {
        ListNode *new_ListNode = new ListNode(arr[i]);
        if (!head)
        {
            head = new_ListNode;
            tail = new_ListNode;
        }
        else
        {
            tail->next = new_ListNode;
            tail = new_ListNode;
        }
    }

    return head;
}

ListNode *mergeNodes(ListNode *head)
{
    if (!head)
    {
        return NULL;
    }
    
    ListNode *slow = head, *fast = head->next ,*prevSlow = head;
    int sum = 0;
    while (fast)
    {

        if (fast->val == 0)
        {
            // cout << sum << endl;

            slow->val = sum;
            prevSlow = slow;
            slow = slow->next;
            sum = 0;
        }
        else
        {
            sum = fast->val + sum; // M
        }

        fast = fast->next;
    }
    prevSlow->next = NULL;
    // ^ memory leak  avoid remove 
    ListNode * temp = slow;
    while (temp)
    {
        ListNode * next = temp->next;
        delete temp;
        temp = next;
    }
    
    return head;
}
int main()
{
    vector<int> arr1 = {0, 3, 1, 0, 4, 5, 2, 0};
    ListNode *list1 = create_linked_list(arr1, arr1.size());

    list1 = mergeNodes(list1);
    print(list1);
    return 0;
}
