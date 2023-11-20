#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void printMiddle(stack<int> &s, int &totalSize)
{
    if (s.size() == 0)
    {
        cout << "emplty stack";
        return;
    }

    if (s.size() == ((totalSize / 2) + 1))
    {
        cout << s.top();
        return;
    }
    int temp = s.top();//!forgot 
    s.pop();
    printMiddle(s, totalSize);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);
    int totalSize = s.size();
    printMiddle(s, totalSize);
    return 0;
}
