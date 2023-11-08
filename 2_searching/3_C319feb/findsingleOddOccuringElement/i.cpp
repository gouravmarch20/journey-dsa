
#include <iostream>
#include <vector>

using namespace std;
int findOddOccurring(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        // odd even case
        if (m % 2 == 0)
        {
            if (arr[m] == arr[m + 1])
            {
                s = m + 2;
            }
            else
            {
                e = m;
            }
        }
        else
        {
            if (arr[m] == arr[m - 1])
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
         m = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 9, 9};
    int index = findOddOccurring(arr);
    cout << arr[index] << endl;

    return 0;
}