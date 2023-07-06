#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int bs(vector<int> &arr, int key)
{
    int s = 0;
    int e = arr.size() - 1;
    int m = (s + e) / 2;

    while (s <= e)
    {

        if (arr[m] == key)
        {
            return m;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = (s + e) / 2;
    }

    return -1;
}
int main()
{

    vector<int> arr{1, 2, 6, 9, 11};
    int target = 6;
    cout << "present at index: " <<  bs(arr, target) << endl;

    return 0;
}