#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
int minNoOfElementToReachTarget(vector<int> &arr, int target)
{
    if (target == 0)
    {
        return 0;
    }
    if (target < 0)
    {
        return INT_MAX;
    }
    int miniCoin = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = minNoOfElementToReachTarget(arr, target - arr[i]);
        if (ans != INT_MAX)
        {
            miniCoin = min(miniCoin, ans + 1);
        }
    }
    return miniCoin;
}
int main()
{
    vector<int> arr = {2,2,1};
    int target = 5;
    int ans = minNoOfElementToReachTarget(arr, target);
    cout << ans << endl;

    return 0;
}