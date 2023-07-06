//! TODO:
#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
int missingElement(vector<int> &arr)
{
    int totalSum = 0;
    int n = 1;
    int actualSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalSum = arr[i] + totalSum;
    }
    for (int i = 0; i < arr.size(); i++)
    {
       
        actualSum = actualSum + n;
        n++;
    }
    cout <<endl << totalSum << "_"<< actualSum << endl;

    return totalSum - actualSum;
}
int main()
{

    vector<int> arr{1, 2 , 4};

    cout << "present at index: " << missingElement(arr) << endl;

    return 0;
}