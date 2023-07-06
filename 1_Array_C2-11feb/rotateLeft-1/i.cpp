#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int main()
{
    vector <int> arr  {1, 3 , 5 , 7 , 9};
    arr[arr.size()] = arr[1];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i+1];
    }
       
    
    return 0;
}