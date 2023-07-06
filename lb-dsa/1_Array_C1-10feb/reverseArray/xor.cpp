#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 8, 9};
    int start = 0;
    int end = 4;
    while (start < end)
    {
       arr[start] =  arr[start] ^  arr[end];
       arr[end] =  arr[start] ^  arr[end];
       arr[start] =  arr[start] ^  arr[end];
       start++;
       end--;
    }
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}