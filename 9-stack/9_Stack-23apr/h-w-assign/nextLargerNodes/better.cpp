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
void printArr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

vector<int> nextLargerNodes(ListNode *head)
{
    stack<int> st;
    ListNode *it = head;
    vector<int> llValue;
    while (it)
    {

        // llValue[i] = it->val;//NOTE AVOID USING THIS use push_back , array size is not defined so can not assign value at random index
        llValue.push_back(it->val);

        it = it->next; // M forgot
    }
        // vector<int> ans; // M --> if size , not assign below we can't assign any at any random index.
        vector<int> ans(llValue.size()); 


    for (int i = 0; i < llValue.size(); i++)
    {
        //? if larger element found -> clean all small element from stack 
        while (!st.empty() && llValue[st.top()] < llValue[i])
        {
            int temp = st.top();
            st.pop();
            ans[temp] = llValue[i];
        }
        st.push(i);
        //^ st mai present all larger value , but in ans at that index 0 is already assign so we get desired result
    }


    return ans;
}
int main()
{
    vector<int> arr1 = {2, 1, 5};
    ListNode *list1 = create_linked_list(arr1, arr1.size());
    vector<int> res = nextLargerNodes(list1);
    cout << res.size() << endl;

    return 0;
}
