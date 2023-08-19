#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>

using namespace std;

void printQueue(queue<int> q)
{
    queue<int> qe = q;
    while (!qe.empty())
    {
        cout << qe.front() << " ";
        qe.pop();
    }
    cout << endl;
};

int main()
{
    queue<int> q;
    //
    q.push(4);
    q.push(8);
    q.push(16);
    q.push(24);
    //
    cout << "size of queue is " << q.size() << endl;
    //
    q.pop();
    //
    if (q.empty())
    {
        cout << "queue is empty " << endl;
    }
    else
    {
        cout << "queue -> empty " << endl;
    }
    cout << "front element of queue is " << q.front();

    printQueue(q);

    return 0;
}
