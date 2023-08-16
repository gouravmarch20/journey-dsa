#include <iostream>
#include <vector>
#include <climits>
#include <stack>
#include <queue>

using namespace std;

class Queue
{
public:
    int *arr; //! miss * who store address
    int size;
    int front;
    int rear;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    //
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Q is empty " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    //
    void pop()
    {
        if (rear == size)
        {
            cout << "Q is empty " << endl;
        }
        else
        {
            arr[front] = -1;
            front++;
            //~ bit secure -> but many case pending after pop we are not rearranging array
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    //
    int getFront()
    {
        if (rear == size)
        {
            cout << "Q is empty " << endl;
        }
        else
        {
            return arr[front];
        }
    }
    //
    bool isEmpty()
    {
        if (rear == size)
            return true;
        return false;
    }
    //
    int getSize()
    {
        return rear - front; // rear 1 step ahead
    }
};

int main()
{
    Queue q(10);
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(30);
    // cout <<"the size is " <<  q.size();
    cout << "the size is " << q.getSize() << endl;
    q.pop();
    cout << "the size is " << q.getSize() << endl;
    cout << "front is " << q.getFront() << endl;


    return 0;
}
