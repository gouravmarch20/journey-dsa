
#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int peakPivotElement(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int x = 0;
    // s < e ==> if no pivot return s / e => both same value at that time
    while (s < e)
    {
        int m = s + ((e - s) / 2);

        if ((m + 1 < arr.size()) && arr[m] > arr[m + 1])
        {
            return arr[m];
        }
        else if (m - 1 >= 0 && arr[m - 1] > arr[m])
        {
            return arr[m - 1];
        }
        else if (arr[s] > arr[m])
        {
            e = m ;
        }
        else if (arr[s] < arr[m])
        {
            s = m + 1;
        }
        // m = s + ((e - s) / 2);
    }

    return s;
}
int main()
{

    // vector<int> arr{8 , 11 , 13 , 1};
    // vector<int> arr{1, 2, 3, 4, 5, 11, 13, 1};
    vector<int> arr{1};

    cout << "peak pivot element : " << peakPivotElement(arr) << endl;

    return 0;
}