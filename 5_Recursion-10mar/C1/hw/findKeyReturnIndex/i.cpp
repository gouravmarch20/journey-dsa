#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxElement(vector<int> arr, int n, int i, int key)
{
    // base case
    if (i >= n)
        return -1;
    // processing
    if ( arr[i] == key)
    {
      return i;
    }

    int chotiProblemAns = maxElement(arr, n, ++i, key);
    return chotiProblemAns;
}

int main()
{

    vector<int> arr{4, 12, 5, 88, 2};
    int i = 0;
    int key = 22;
    int ans = maxElement(arr, arr.size(), i, key);

    cout << "element found at index : " << ans << endl;

    return 0;
}