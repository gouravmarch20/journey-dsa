#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int minElement(vector<int> arr, int n , int i, int minVal)
{
    // base case
    if (i >= n)
        return minVal;
    if ( minVal > arr[i])
    {
        minVal = arr[i];
    }

    int chotiProblemAns = minElement(arr, n , ++i, minVal);
    return chotiProblemAns;
}

int main()
{

    vector<int> arr{4, 12, 5, 88, 2};
    int minVal = INT_MAX;
    int i = 0;
    int ans = minElement(arr, arr.size() , i , minVal);

    cout << "Answer is: " << ans << endl;

    return 0;
}