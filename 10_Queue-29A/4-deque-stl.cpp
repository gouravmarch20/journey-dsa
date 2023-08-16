#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;

int main()
{
    deque<int> dq;
    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(20);
    dq.push_back(30);
    //~ 10 5 20 30
    dq.pop_front(); //~ 5 20 30
    dq.pop_back();  //~ 5 20
    cout << "the size is " << dq.size() << endl;
    cout << "front : " << dq.front() << endl;
    cout << "back : " << dq.back() << endl;
    if (dq.empty())
    {
        cout << "deque is empty " << endl;
    }else{
        cout << "deque is not empty"<<endl;
    }

    return 0;
}
