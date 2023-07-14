#include <iostream>
#include <climits>
#include <vector>
using namespace std;

bool findKeyInArr(vector<int> arr, int n, int i, int key)
{
    // base case
    if (i >= n)
        return false;
    // processing
    if ( arr[i] == key)
    {
      return true;
    }

    int chotiProblemAns = findKeyInArr(arr, n, ++i, key);
    return chotiProblemAns;
}

int main()
{

    vector<int> arr{4, 12, 5, 88, 2};
    int i = 0;
    int key = 22;
    int ans = findKeyInArr(arr, arr.size(), i, key);

    cout << "Answer is: " << ans << endl;

    return 0;
}