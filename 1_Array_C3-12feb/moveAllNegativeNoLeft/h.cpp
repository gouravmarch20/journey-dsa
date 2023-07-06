#include <iostream>
#include <vector>
using namespace std;
void moveNegatives(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        if (arr[s] < 0)
        {        // Element at correct position
            s++; // Simply increment s
        }
        else if (arr[e] > 0)
        {

            e--;
        }
        else
        {
            swap(arr[s], arr[e]); // Place negative at place of positive element

            s++;
            e--;
        }
    }
}
int main()
{

    vector<int> arr{-3, 8, -4, -5};
    moveNegatives(arr);
    for (int s = 0; s < arr.size(); s++)
    {
        cout << arr[s] << " ";
    }
    return 0;
}