#include <iostream>
#include <vector>
#include <climits>
#include <stack>

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

vector<int> nextLargerNodes(ListNode *head)
{
    stack <int> st ;
    ListNode * it = head;
    int i = 0; 
    vector<int> res ;
    // M failed in writing code -->  index storing in stack ,then how to compare value
    while (it)
    {
        if ((!st.empty()) && st.top() < it->val )
        {
            // res[st.top]//! no way with storing value in array already
        }else{
            // st.push(it->val);//^ avoid putting value in stack , index need to put
            st.push(i);
        }
        i++;
        
    }
    

}
int main()
{
    vector<int> arr1 = {2, 1, 5};
    ListNode *list1 = create_linked_list(arr1, arr1.size());
    nextLargerNodes(list1);

    return 0;
}
