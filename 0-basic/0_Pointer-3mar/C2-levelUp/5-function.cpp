#include <iostream>
#include <vector>

using namespace std;
//^ pointer arr storing starting 
void checkPtr(int arr[10])
{
    cout << "pointer size 8 byte" << sizeof(arr) << endl;
    cout << arr << endl;
    cout << &arr << endl;//^ pointer address
    
}
int main()
{
    int arr[10] = {44, 88, 99, 122};
    cout << arr << endl;
    checkPtr(arr);

    return 0;
}