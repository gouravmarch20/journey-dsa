#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
void rowWiseSumPrint(int arr[][3], int rows, int col)
{
    for (int r = 0; r < rows; r++)
    {
        int sum = 0;
        for (int c = 0; c < col; c++)
        {
            sum += arr[c][r];
        }
        cout << sum << " ";
    }
}
int main()
{

    int arr[3][3] = {
        {4, 2, 3},
        {2, 3, 3},
        {4, 2, 1},
    };
    int rows = 3;
    int columns = 3;
    rowWiseSumPrint(arr, rows, columns);

    return 0;
}