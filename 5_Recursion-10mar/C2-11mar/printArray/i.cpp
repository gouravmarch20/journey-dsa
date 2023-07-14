#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr, int n, int i)
{
    // base case
    if (i >= n)
    {
        return;
    }

    // 1 case solve krdia
    cout << arr[i] << "->";
    // baaki recursion sambhal lega
    printArr(arr, n, i + 1);
}

// void printArr(int arr[], int n) {
//         //base case
//         if( n==0) {
//                 return;
//         }

//         //1 case solve krdia
//         cout << arr[0] << " ";
//         //baaki recursion sambhal lega
//         printArr(arr+1, n-1);
// }

int main()
{
    vector<int> arr  {10, 20, 30, 40, 50};
    int i = 0;
    printArr(arr, arr.size(), i);

    return 0;
}