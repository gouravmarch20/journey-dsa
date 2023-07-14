#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    int *ptr1 = ptr;
    // int *ptr1 = &a;
    *ptr1 += 10;
    cout << *ptr << endl;
    cout << *ptr1 << endl;

    return 0;
}