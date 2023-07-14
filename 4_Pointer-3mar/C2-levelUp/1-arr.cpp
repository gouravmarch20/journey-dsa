#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int arr[4] = {1, 3, 5, 7};
    int *p = arr;
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << p << endl;
    cout << &p << endl;//p address
    cout << *p << endl;
    cout << *p << endl;

    return 0;
}