#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Stack
{
public:
    int *arr;
    int top;
    int size;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    // function
    // push
    void push(int data)
    {
        if (size - top > 1)
        {
            // space available inset
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack overflow " << endl;
        }
    }
    // pop
    void pop()
    {
        if (top == -1)
        {
            // space  inset
            cout << "stack is empty " << endl;
        }
        else
        {
            top--;
        }
    }
    // empty
    int getTop()
    {
        if (top == -1)
        {
            // space  inset
            cout << "stack is empty " << endl;
        }
        else
        {
            return arr[top];
        }
        return false;
    }
    // get top

    // get size
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout <<endl;
    //
    cout <<"size of stack is " << s.getSize()<<endl;

    return 0;
}
