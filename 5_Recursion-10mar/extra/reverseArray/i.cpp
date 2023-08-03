#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
void revArray(int arr[], int i, int j)
{
    if (i == j)
    {
        return;
    }
    revArray(arr, i + 1, j - 1);
    swap(arr[i], arr[j]);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int i = 0;
    int j = n - 1;
    revArray(arr, i, j);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}