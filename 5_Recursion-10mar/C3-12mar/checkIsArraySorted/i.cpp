#include <iostream>
#include <vector>
using namespace std;

bool isArraySorted(vector<int> &arr, int &n, int i)
{
    if (i == n - 1) //^ mistake forgot n - 1 ==> arr[i+1]...unassigned access 0 thus => false return
    {
        // cout << "ui";
        return true;
    }

    if (arr[i] > arr[i + 1])
    {
        return false;
    }
    return isArraySorted(arr, n, i + 1);
}

int main()
{
    // vector<int> arr{2, 8, 111, 77};
    vector<int> arr{2, 8, 111};
    int n = arr.size();
    bool ans = isArraySorted(arr, n, 0);
    ans ? cout << "sorted arr" << endl : cout << "not " << endl;

    return 0;
}