#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>

using namespace std;

void reverse(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        int val = q.front(); //^ forgot
        q.pop();
        st.push(val);
    }
    while (!st.empty())
    {
        int val = st.top();
        q.push(val);
        st.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(11);
    reverse(q);
    while (!q.empty())
    {
        cout << q.front()<<" ";
        q.pop();
    }

    return 0;
}
