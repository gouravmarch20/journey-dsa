#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;
class Queue
{
    int *arr;
    int size;
    int rear;
    int front;

    void push(int data)
    {
        // ^ use else if
        // full case -> case1 : front start , rear end , case 2 : front in between , rear behind front if they collide overlapping it's mistake
        if ((front == 0 && rear == size - 1) || (rear < front && rear - 1 == front))
        {
            cout << "already full " << endl;
        }
        // first time adding
        else if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        // circular  case
        else if (rear == size - 1 && front != 0)
        {

            rear = 0;
            arr[rear] = data;
        }
        // normal   case
        else
        {
            ++rear;
            arr[rear] = data;
        }
    }
   
   
    void pop()
    {
        // empty check
        if (front == -1)
        {
            cout << "the stack is empty can not pop " << endl;
        }
        //  both at first
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // front at last
        else if (front == size - 1)
        {
            front = 0;
        }
        // normal case
        else
        {
            front++;
        }
    }
};
int main()
{
    // Queue 

    return 0;
}
