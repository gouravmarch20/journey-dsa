#include <iostream>
#include <vector>
#include <climits>
#include <stack>

using namespace std;
class Deque
{
public: //! forget to make public
    int *arr;
    int size;
    int rear;
    int front;

    Deque(int size)
    {
        this->size = size;
        arr = new int[size];

        front = -1;
        rear = -1;
    }

    void pushRear(int data)
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
    void pushFront(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear < front && rear - 1 == front))
        {
            cout << "already full " << endl;
        }
        // first time adding
        else if (front == -1)
        {
            front = 0;
            rear = 0;
            arr[front] = data;
        }
        //^circular case -> front go back if safe
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;

            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }
    };

    //
    void popFront()
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
            arr[front] = -1;

            front = 0;
        }
        // normal case
        else
        {
            arr[front] = -1;

            front++;
        }
    }
    void popRear()
    {
        // empty check
        if (front == -1)
        {
            cout << "the stack is empty can not pop " << endl;
        }
        //  both at first
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        // M pop mai no check need
        else if (rear == 0)
        {
            arr[rear] = -1;
            rear = size - 1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Deque dq(6);
    dq.print();
    dq.pushRear(10);
    dq.pushRear(20);
    dq.pushRear(30);
    dq.print();
    dq.popRear();
    dq.print();

    dq.popFront();
    dq.popFront();
    dq.print();
    dq.pushFront(55);
    dq.pushFront(65);
    dq.print();

    // dq.pushFront(58);

    return 0;
}
