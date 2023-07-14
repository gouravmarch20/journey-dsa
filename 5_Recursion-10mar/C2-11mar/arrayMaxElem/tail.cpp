#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxElement(vector<int> arr, int i, int maxVal)
{

    // base case
    if (i == 0)
        return maxVal;

    int chotiProblemAns = maxElement(arr, --i , maxVal);
    if (arr[i] > maxVal)
    {
        maxVal = arr[i];
    }
    return maxVal;
}

int main()
{

    vector<int> arr{4, 12, 5 , 88, 2};
    int maxVal = INT_MIN;
    int i = arr.size() - 1;
    int ans = maxElement(arr, i , maxVal);

    cout << "Answer is: " << ans << endl;

    return 0;
}