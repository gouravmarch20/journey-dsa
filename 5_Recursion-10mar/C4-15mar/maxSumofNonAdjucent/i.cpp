#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void solve(vector<int> &arr, int i, int s, int &maxi)
{
    // base case
    if (i >= arr.size())
    {
        maxi = max(maxi, s);
        return;
    }

    //
    solve(arr, i + 2, s + arr[i], maxi);
    solve(arr, i + 1, s, maxi);
}

int main()
{
  vector<int> arr{1, 4, 6, 9, 100};
    int maxi = INT_MIN;
    int i = 0;
    int s = 0;
    solve(arr, i, s, maxi);
    cout << maxi << endl;
    return 0;
}