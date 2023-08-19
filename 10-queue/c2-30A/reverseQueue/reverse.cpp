#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>

using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int val = q.front();
    q.pop();
    reverse(q);
    q.push(val);
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
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
