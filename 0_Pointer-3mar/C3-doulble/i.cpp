#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;

    int **q = &p;//? pointer p ka address assign --

    cout << &a << endl;// a address
    cout << p << endl;// a address 
    cout << *p << endl;// a value
    cout << q << endl;// p address
    cout << *q << endl;// q store p address -> so print p value => a address
    cout << **q << endl;// q store p address -> p store a address => reach a print that value

    return 0;
}