#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = (s + e) / 2;
    int x = 0;
    while (s <= e)
    {
        cout << s << "_" << e << "_" << m << "_" << endl;
        if ((arr[m - 1]< arr[m] )&& ( arr[m] > arr[m + 1]))
        {
            return m;
        }
        else if (arr[m] > arr[m + 1])
        {
            e = m;
        }
        else if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        if (x == 20)
        {
            break;
        }
        x++;
        m = (s + e) / 2;
    }

    return -1;
}
int main()
{

    vector<int> arr{24, 69, 100, 99, 79, 78, 67, 36, 26, 19};

    cout << "present at index: " << peakIndexInMountainArray(arr) << endl;

    return 0;
}