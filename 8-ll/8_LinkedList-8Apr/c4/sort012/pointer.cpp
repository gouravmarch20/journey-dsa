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
ListNode *sort012(ListNode *head)
{

    //^ forget tail tracker sai possible => how to catch tail
    //? s1 : node create

    ListNode *zeroHead = new ListNode(-1);
    ListNode *zeroTail = zeroHead; //! forget tail assignment

    ListNode *oneHead = new ListNode(-1);
    ListNode *oneTail = oneHead;

    ListNode *twoHead = new ListNode(-1);
    ListNode *twoTail = twoHead;

    ListNode *curr = head;

    // ? s2 : assign in serrated LL
    while (curr != NULL)
    {
        // cout << curr-> val << " ";
        if (curr->val == 0)
        {
            ListNode *temp = curr; //! miss ,  creating new node
            curr = curr->next; 
            temp->next = NULL;
            //
            zeroTail->next = temp;
            // zeroTail = temp;//! missing
        }
        else if (curr->val == 1)
        {
            ListNode *temp = curr;
            curr = curr->next;
            // temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->val == 2)
        {
            ListNode *temp = curr;
            curr = curr->next;
            // temp->next = NULL;
            twoTail->next = temp;
            twoTail = temp;
        }
    }
    cout << endl;

    // print(zeroHead);
    print(oneHead);
    print(twoHead);
    //? s3 : remove -1 ==> first time only
    // if (twoHead != NULL)//! not need this case --> we had added -1 so not chance of empty LL

    // ListNode *temp = oneHead;
    // oneHead = oneHead->next;
    // temp->next = NULL;
    // delete temp;
    // //
    // temp = twoHead;
    // twoHead = twoHead->next;
    // temp->next = NULL;
    // delete temp;

    // temp = twoHead;
    // twoHead = twoHead->next;
    // temp->next = NULL;
    // delete temp;

    //? s4 :  join LL
    // if (oneHead != NULL)
    // {
    //     zeroTail->next = oneHead;
    //     if (twoHead != NULL)
    //     {
    //         oneTail->next = twoHead;
    //     }
    // }
    // else
    // {
    //     if (twoHead != NULL)
    //     {
    //         oneTail->next = twoHead;
    //     }
    // }

    // //? zero pointer sai remove -1
    // temp = zeroHead;
    // zeroHead = zeroHead->next;
    // temp->next = NULL;
    // delete temp;
    // //
    // return zeroHead;
}
int main()
{

    // vector<int> arr1 = {1, 0, 0};
    vector<int> arr1 = {0, 1, 0, 2, 1, 1, 1};

    ListNode *head = create_linked_list(arr1, arr1.size());

    // print(head);
    ListNode *l1 = sort012(head);
    // print(l1);

    return 0;
}
