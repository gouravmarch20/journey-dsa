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
        this->random = NULL;
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

ListNode *rotateRight(ListNode *head, int k)
{
    // M forgot
    if (!head) return NULL;
    
    int len = getLength(head);
    int actualRotate = (k % len);
    //^ if rotate 0 --> return same
    if (actualRotate == 0)
        return head;

    int newLastNoPosition = len - actualRotate - 1; //^ -1 because 0 sai counting start
    ListNode *newLastNode = head;

    for (int i = 0; i < newLastNoPosition; i++)
    {
        newLastNode = newLastNode->next;
    }

    ListNode *newHead = newLastNode->next;
    newLastNode->next = NULL; //^ forgot
    ListNode *it = newHead;
    while (it->next)
    {
        it = it->next;
    }

    it->next = head;
    return newHead;
}
int main()
{
    vector<int> arr1 = {10, 20, 30, 40, 50};
    ListNode *list1 = create_linked_list(arr1, arr1.size());
    int k = 3;
    // int k = 0;//M
    rotateRight(list1, k);
    // print(list1);
    return 0;
}
