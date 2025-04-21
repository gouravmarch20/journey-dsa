#include <iostream>
#include <vector>

using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *reverse(ListNode *head)
{
    ListNode *prev = nullptr;
    ListNode *curr = head;
    while (curr != nullptr)
    {
        ListNode *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

ListNode *addTwoNumbers(ListNode *list1, ListNode *list2)
{
    list1 = reverse(list1);
    list2 = reverse(list2);

    ListNode *ans = nullptr;
    ListNode *ansTail = nullptr;
    int carry = 0;

    while (list1 != nullptr || list2 != nullptr || carry != 0)
    {
        int sum = carry;
        if (list1 != nullptr)
        {
            sum += list1->val;
            list1 = list1->next;
        }
        if (list2 != nullptr)
        {
            sum += list2->val;
            list2 = list2->next;
        }

        carry = sum / 10;
        int digit = sum % 10;
    
        ListNode *newNode = new ListNode(digit);

        if (ans == nullptr)
        {
            ansTail = newNode;
            ans = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
    }

    return reverse(ans);
}

ListNode *create_linked_list(vector<int> arr)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    for (int val : arr)
    {
        ListNode *new_node = new ListNode(val);
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
    vector<int> arr1 = {9, 8, 7};
    vector<int> arr2 = {9, 6};

    ListNode *list1 = create_linked_list(arr1);
    ListNode *list2 = create_linked_list(arr2);

    ListNode *result = addTwoNumbers(list1, list2);
    print(result);

    return 0;
}
