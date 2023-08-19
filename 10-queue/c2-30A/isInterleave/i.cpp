#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

void makeInterleave(queue<int> q1)
{

    int k = q1.size() / 2; //! forget /2
    queue<int> q2;
    for (int i = 0; i < k; i++)
    {
        q2.push(q1.front());
        //    q1.front++;//^ forgot stl queue , using class way
        q1.pop();
    }
    while (!q2.empty())
    {
        int val = q2.front();
        q1.push(val);
        int val1 = q1.front();
        q1.push(val1);
        q1.pop();
        q2.pop();
    }
    //^ odd case
    if (q1.size() & 1)
    {
        int val = q1.front();
        q1.pop();
        q1.push(val);
    }

    while (!q1.empty())
    {
        cout << q1.front() << endl;
        q1.pop();
    }
};

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    // q.push(78);
    makeInterleave(q);
    // q.push(7880);

    return 0;
}
