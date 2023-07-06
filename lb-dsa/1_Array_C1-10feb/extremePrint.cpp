#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 8, 9};
    int start = 0;
    int end = 4;
    while (start <= end)
    {
        // array odd side 
        if (start == end)
        {
            cout << arr[start] << " "; // print once only
        }else{
        cout << arr[start] << "_" << arr[end] << " ";
        }
        start++;// updating start pointer/variable
        end--; // updating end pointer/variable
    }
    return 0;
}