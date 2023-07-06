#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
void moveNegativesToLeft(vector<int> &arr)
{
    int s = 0;

    int e = arr.size() - 1;

    while (s <= e)
    {
        if (arr[s] < 0)
        {
            s++;
        }
        else
        {
            swap(arr[s], arr[e]);
            e--;
        }
        // for (int i = 0; i < arr.size(); i++)
        // {
        //     cout << arr[i] ;
        // }
        cout<<endl;
    }
}
int main()
{

    vector<int> arr{1 , 2 , -3 , 4 , -4 , -5};

    moveNegativesToLeft(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}