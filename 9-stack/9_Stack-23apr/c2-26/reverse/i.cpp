#include <iostream>
#include <vector>
#include <stack>

using namespace std;
// ! forgot <int>
void printStack(stack<int> s)
{
    if (s.empty())
        return;

    int x = s.top();
    s.pop();

    // Recursively call the function printStack
    printStack(s);

    cout << x << " ";
    s.push(x);
}

void insertAtBottom(stack<int> &s, int &target)
{

    if (s.size() == 0)
    {
        s.push(target);
        return;
    }
    int topElem = s.top();
    s.pop();
    insertAtBottom(s, target);
    s.push(topElem);
}
void reverseStack(stack<int> &s)
{
    if (s.size() == 0)
    {
        return;
    }

    int target = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, target);
}
 
int main()
{
    stack<int> s;
    int target = 77;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);
    printStack(s);

    return 0;
}
