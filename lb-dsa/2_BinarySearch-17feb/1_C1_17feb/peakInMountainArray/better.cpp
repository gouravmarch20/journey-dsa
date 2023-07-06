#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = (s + e) / 2;
    // int x = 0;
    while (s < e)
    {

        if (arr[m] < arr[m + 1])
        {
            s = m + 1;
        }
        else
        {
            e = m;
        }
        // if (x == 20)
        // {
        //     break;
        // }
        // x++;
        m = (s + e) / 2;
    }

    return m;
}
int main()
{

    vector<int> arr{24, 69, 100, 99};

    cout << "present at index: " << peakIndexInMountainArray(arr) << endl;

    return 0;
}