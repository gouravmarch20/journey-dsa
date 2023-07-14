#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi) //^ & of operator
{
    // base case
    if (i >= n)
    {
        return;
    }
    // 1 case solve krna hai => current element ko check karo for max
    if (arr[i] > maxi)
    {
        maxi = arr[i]; //^ change in maxi memory location
    }

    // baaki recursion sambhal lega
    findMax(arr, n, i + 1, maxi);
}

int main()
{

    int arr[] = {10, 30, 21, 44, 32, 6, 19, 66};
    int n = 8;

    int maxi = INT_MIN;

    int i = 0;
    findMax(arr, n, i, maxi);

    cout << "maximum number is: " << maxi << endl;

    return 0;
}