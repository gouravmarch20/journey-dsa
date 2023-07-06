#include <iostream>
#include <vector> // vector header file to use vector in our program
using namespace std;
bool findKey(int arr[][3], int rows, int col, int key)
{
    for (int r = 0; r < rows; r++)
    {

        for (int c = 0; c < col; c++)
        {
            if (key == arr[r][c])
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

    int arr[3][3] = {{1, 2, 3}, {10, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 3;
    int key = 10;

    cout << findKey(arr, rows, columns, key) << " ";

    return 0;
}