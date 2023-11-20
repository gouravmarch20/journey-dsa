#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int arr[5] = {1, 3, 5, 7};
    int * p = arr;
    cout << sizeof(p)<< endl;// always 8 -> 64 bit arch support
    cout << sizeof(*p)<< endl;//depend on datatype 
    cout << sizeof(arr) << endl;//^ total bytes an array consumer 

    return 0;
}