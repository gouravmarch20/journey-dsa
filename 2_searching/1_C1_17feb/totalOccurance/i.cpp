#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int bsTotalOccurrence(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = (s + e) / 2;
    int firstOccIndex = -1;
    int c = 200;
    //^ first occurrence
    while (s <= e)
    {

        if (arr[m] == key)
        {
            cout << s << m << e << endl;

            firstOccIndex = m;
            e = m - 1;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }

        m = s + (e - s) / 2;
    }
    //^ total occurrence
    // while (arr[firstOccIndex + 1] == key)
    // {
    //     firstOccIndex++;
    // }
    return firstOccIndex;
}
int main()
{

    vector<int> arr{1, 11, 11, 33, 33};
    int target = 33;
    cout << "total occurrence " << bsTotalOccurrence(arr, target) << endl;

    return 0;
}