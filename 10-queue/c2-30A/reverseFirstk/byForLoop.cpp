#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void reverseKElements(queue<int>& q, int k)
{
    // Step 1: Reverse the first k elements using a stack
    int n = q.size();
    stack<int> st;

    for (int i = 0; i < k; ++i)
    {
        st.push(q.front());
        q.pop();
    }

    // Step 2: Put the reversed elements back in the queue
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // Step 3: Move remaining elements to the back of the queue
    for (int i = 0; i < n - k; ++i)
    {
        q.push(q.front());
        q.pop();
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

    int k = 2;
    reverseKElements(q, k);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
