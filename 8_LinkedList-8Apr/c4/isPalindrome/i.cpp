#include <iostream>
#include <vector>

using namespace std;
class ListNode
{
public:
    int val;
    ListNode *prev;
    ListNode *next;
    ListNode()
    {
        this->val = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    ListNode(int val)
    {
        this->val = val;
        this->prev = NULL;
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
ListNode *reverse(ListNode *head)
{
    //! if only one node the return head
    if (head->next == NULL)
    {
        return head;
    }

    ListNode *prev = NULL;
    ListNode *curr = head;
    ListNode *forward = curr->next;
    while (forward != NULL)
    {
        forward = curr->next;

        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
bool isPalindrome(ListNode *head)
{
    if (head == NULL)
    {
        //
    }
    if (head->next == NULL)
    {
        return true;
    }

    ListNode *slow = head;
    ListNode *fast = head->next;
    //! m1 : 2 LL
    if (fast->next == NULL)
    {
        if (slow->val == fast->val)
        {
            return true;
        }
        return false;
    }
    while (fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL )
        {
            // cout << "ki" << fast->val;
            fast = fast->next;
            slow = slow->next;
        }
    }

    // ? step 2 : reverse


    ListNode *reverseHead = reverse(slow->next);
    cout<<"rev";

    slow->next = reverseHead; //! m1

    // ? step3  : compare
    ListNode *temp1 = head;
    ListNode *temp2 = reverseHead;
    print(temp1);
    print(temp2);
    while (temp2 != NULL)
    {
        if (temp2->val == temp1->val)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
        {
            return false;
        }
    }

    return true;
}

int main()
{

    // vector<int> arr1 = {1, 0, 0};
    vector<int> arr1 = {1, 2, 2,1};

    ListNode *list1 = create_linked_list(arr1, arr1.size());

    // print(list1);
    bool res = isPalindrome(list1);
    cout << res << endl;

    return 0;
}
