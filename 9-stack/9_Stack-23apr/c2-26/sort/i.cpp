#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void printStack(stack<int> s)
{
    if (s.empty())
    {
        cout << endl;
        return;
    }
    int topE = s.top();
    cout << topE << " ";
    s.pop();
    printStack(s);
    s.push(topE);
}
void insertSort(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    // if (target > s.top())//!wrong compare
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    int topElem = s.top();
    s.pop();
    insertSort(s, target);
    // bt
    s.push(topElem);//! wrong item push
}
void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int topElem = s.top();
    s.pop();
    sortStack(s); //! forgot
    insertSort(s, topElem);
}

int main()
{
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
    // printStack(s);
    sortStack(s);
    // printStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}
