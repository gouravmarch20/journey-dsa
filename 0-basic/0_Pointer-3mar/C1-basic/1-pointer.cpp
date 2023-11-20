#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a = 5;
    cout << "address of a is: " << &a << endl;
    int *ptr = &a;
    cout << "value store at ptr: " << ptr << endl;
    cout << "value ptr pointing to: " << *ptr << endl;
    cout << "ptr address " << &ptr << endl;

    return 0;
}