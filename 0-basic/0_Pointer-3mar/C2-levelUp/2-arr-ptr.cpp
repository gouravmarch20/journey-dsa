#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int arr[4] = {33, 88, 99, 117};
    int *p = arr;
    cout << *p + 2 << endl;     // 33+2=> 35
    cout << *arr + 3 << endl; // 33 + 3 => 36
    cout << *p << endl;
    cout << *(p + 3) << endl;

    return 0;
}