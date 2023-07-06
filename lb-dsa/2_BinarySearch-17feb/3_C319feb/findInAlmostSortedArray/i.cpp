#include <iostream>
#include <vector>
using namespace std;
int bs(vector<int> &arr, int target)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[m] == target)
        {
            return m;
        }
        if (m + 1 < arr.size() && arr[m + 1] == target)
        {
            return m + 1;
        }

        if (m - 1 >= 0 && arr[m - 1] == target)
        {
            return m - 1;
        }
        if (arr[m] < target)
        {
            s = m + 2;
        }
        else
        {
            e = m - 2;//^ m -1 also work but already checked so moving fast
        }

        m = s + (e - s) / 2;
    }
    return -1;
}
int main()
{

    vector<int> arr{10, 3, 40, 20, 90, 80, 70};
    int target = 10;
    cout << "present at index: " << bs(arr, target) << endl;

    return 0;
}