#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;
// M not use as reference
void reverseKElements(queue<int> &q, int k)
{
    int c = 0;
    int n = q.size();
    stack<int> st;
    // ^k=0 , k > n --> return same
    if (k > n || k == 0)
    {
        return;
    }

    // step1 : first k reverse --> stack mai put

    while (!q.empty())
    {
        int val = q.front();
        st.push(val);
        q.pop();

        c++;
        if (c == k)
        {
            break;
        }
    }
    // step2: stack sai out & put in queue front//^ reverse done
    while (!st.empty())
    {
        int val = st.top();
        q.push(val);
        st.pop();
    }
    // step3 : push n-k element at queue back
    c = 0; // M forgot
    //^ n -  k == 0 , all rev handle by stack
    while (!q.empty() && n - k != 0)
    {
        int val = q.front();
        q.pop();
        q.push(val);
        c++;
        if (c == n - k)
        {
            break;
        }
    }
};

int main()
{
    queue<int> q;
    q.push(3);
    q.push(5);
    q.push(2);
    q.push(6);
    q.push(5);

    int k = 0;
    reverseKElements(q, k);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
