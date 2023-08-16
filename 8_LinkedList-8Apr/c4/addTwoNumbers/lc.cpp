// !m1 : understand question properly -> see diagram 
//? no already store in reversed order ==> read form RIGHT TO LEFT , NOT form LEFT
//non-empty , +ve no only  ,return sum

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

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
// void addTwoNumbers(ListNode * &l1, ListNode * &l2)
{

    // step2: add both linked list

    ListNode *ansHead = NULL;
    // ListNode *ans = NULL;//! m2 no need head , tail only it's not array ,
    ListNode *ansTail = NULL;
    // int sum = 0;//!m3
    int carry = 0;

    //
    while (l1 != NULL && l2 != NULL)
    {
        int sum = carry + l1->val + l2->val;

        // find digit to create node for
        int digit = sum % 10;
        // calculate carry
        carry = sum / 10;
        // ans = new ListNode(digit);//!m1 --> overriding ans
        ListNode *newNode = new ListNode(digit);

        // if (ans == NULL)//!m2
        if (ansHead == NULL) //!
        {
            ansTail = newNode;
            ansHead = newNode;
        }
        else
        {

            ansTail->next = newNode; //! forgot next pointing
            ansTail = newNode;       //? tail position change
        }
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1 != NULL)
    {
        int sum = carry + l1->val;
        int digit = sum % 10;
        carry = sum / 10;
        ListNode *newNode = new ListNode(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        l1 = l1->next;
    }

    while (l2 != NULL)
    {
        int sum = carry + l2->val;
        int digit = sum % 10;
        carry = sum / 10;
        ListNode *newNode = new ListNode(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        l2 = l2->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        ListNode *newNode = new ListNode(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    // return reverse(ansHead);
    return ansHead;
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

    // vector<int> arr1 = {1, 0, 0};
    vector<int> arr1 = {2, 4, 9};
    vector<int> arr2 = {5, 6, 4, 9};

    ListNode *l1 = create_linked_list(arr1, arr1.size());
    ListNode *l2 = create_linked_list(arr2, arr2.size());
    // print(l1);
    ListNode *res = addTwoNumbers(l1, l2);

    print(res);

    return 0;
}
