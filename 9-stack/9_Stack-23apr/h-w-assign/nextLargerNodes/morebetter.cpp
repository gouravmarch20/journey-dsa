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
    vector <int> res ;
    while (head)
    {
        res.push_back(head->val);
        head = head->next;
    }
    // 
    for (int i = 0; i < res.size(); i++)
    {
        while ((!st.empty()) && res[st.top()] < res[i])
        {
            res[st.top()] = res[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int i = st.top();
        st.pop();
        res[i] = 0;
    }
    
    return res;
}
int main()
{
    vector<int> arr1 = {2,7,4,3,5};
    ListNode *list1 = create_linked_list(arr1, arr1.size());
    vector<int> res = nextLargerNodes(list1);
    printArr(res);

    return 0;
}
