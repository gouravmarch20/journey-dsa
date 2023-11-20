#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
void moveNegativesToLeft(vector<int> &arr)
{
    int s = 0;

    int lp = 0;
    for( int i = 0 ; i < arr.size() ; i++){
        if(arr[i] < 0 ){
            swap(arr[i] , arr[lp++]);
        }
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