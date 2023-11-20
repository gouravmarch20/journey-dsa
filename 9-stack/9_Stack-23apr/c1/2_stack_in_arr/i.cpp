#include <iostream>
#include <vector>
#include <stack>

using namespace std;
class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size; //? name overlapping avoid this use
        top1 = -1;
        top2 = size;
    }
    // functions
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "not possible " << endl;
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "overflow";
        }

        top1--;
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "not possible " << endl;
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop2()
    {
        //! if empty not even 1 item insert ==> underflow
        if (top2 > size)
        {
            cout << "overflow";
        }

        top2--;
    }
};
int main()
{

    return 0;
}
