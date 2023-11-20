#include <iostream>
#include <vector>
#include <climits>

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

ListNode *create_linked_list(vector<int> ans, int n)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;

    for (int i = 0; i < n; i++)
    {
        ListNode *new_ListNode = new ListNode(ans[i]);
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

vector<int> nodesBetweenCriticalPoints(ListNode *head)
{
    //~ s1 : safe case
    vector<int> ans = {-1, -1};
    ListNode *prev = head;
    if (!prev)
    {
        return ans;
    }
    //
    ListNode *curr = head->next;
    if (!curr)
    {
        return ans;
    }
    //
    ListNode *forward = head->next->next;
    if (!forward)
    {
        return ans;
    }
    //~ step2: finding critical point ,  find minDiff ,mark first cp for max diff
    int firstCp = -1;
    int lastCp = -1;
    int minDist = INT_MAX; //^ min distance trace in each critical point
    int i = 1;             //^question counting start
    while (forward)
    {
        bool isCp = false;
        if (
            (curr->val < prev->val && curr->val < forward->val) ||
            (curr->val > prev->val && curr->val > forward->val))
        {
            isCp = true;
        }

        if (isCp && firstCp == -1)
        {

            firstCp = i;
            lastCp = i;
        }
        else if (isCp) // M forget is
        {
            cout << i << lastCp <<endl;
            minDist = min(minDist, i - lastCp); //^ wrong logic => i - lastCp

            lastCp = i;
        }

        i++; // M forgot

        prev = prev->next;
        curr = curr->next;
        forward = forward->next;
    }
    //
    cout << "mind" << minDist << endl;
    if (firstCp == lastCp) // M wrong compare
    {
        return ans;
    }
    else
    {
        ans[0] = minDist;
        ans[1] = lastCp - firstCp;
    }
    return ans;
}
int main()
{
    vector<int> ans1 = {6, 8, 4, 1, 9, 6, 6, 10, 6};
    ListNode *list1 = create_linked_list(ans1, ans1.size());
    int k = 3;

    vector<int> res = nodesBetweenCriticalPoints(list1);
    int i = 0;
    while (i < res.size())
    {
        cout << res[i];
        i++;
    }

    return 0;
}
