#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    // int *q = &p;//^ not possible
    int *q = p;//? value of p is a address  ==> so q point to a
    int *r = q;

    cout << a << endl;// 10
    cout << &a << endl; // 1X => address of a 
    cout << p << endl; // 1X  => address of a 
    cout << &p << endl;// 2X  => address of p
    cout << *p << endl; //10
    cout << q << endl; //^ 1X  => address of a 
    cout << &q << endl; // 3X  => address of q
    cout << *q << endl; // 10
    cout << r << endl;  //^ 1X  => address of a 
    cout << &r << endl; // 4X => address of r 
    cout << *r << endl; // 10 
    cout << (*p + *q + *r) << endl; // 30
     
    return 0;
}