#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //^ 1d array
    vector<int> arr(3, -5); // size of array 3 , initalized with -5 or default 0
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

  


        return 0;
}