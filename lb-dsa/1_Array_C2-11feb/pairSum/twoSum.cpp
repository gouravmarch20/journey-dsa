// Brute force approach is discussed -> We will discuss that if ans is returned in sorted array, there are duplicates as well in the array. In future we will discuss it.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    int target = 9;

    // printing ans array
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << arr[i] << "_" << arr[j] << " ";
            }
        }
    }
    return 0;
}