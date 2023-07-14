#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int coutElement(vector<int> arr, int n, int i, int key , int c)
{
    // base case
    if (i >= n)
        return c;
    // processing
    if ( arr[i] == key)
    {
        ++c;
    }

    int chotiProblemAns = coutElement(arr, n, ++i, key , c);
    return chotiProblemAns;
}

int main()
{

    vector<int> arr{4, 12, 11, 12, 11 ,12};
    int i = 0;
    int c = 0;
    int key = 11;
    int ans = coutElement(arr, arr.size(), i, key , 0);

    cout << "Answer is: " << ans << endl;

    return 0;
}