#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
void rowWiseSumPrint(int arr[][3], int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
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