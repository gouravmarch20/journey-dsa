#include <iostream>
#include <vector>

using namespace std;
bool bs(int arr[][4], int row, int col, int target)
{
    int s = 0;

    int e = row * col - 1;
    int m = s + (e - s) / 2;
    while (s <= e)
    {

        int rowNo = m / col; //^ m is index no => tell m row no
        int colNo = m % col; //^ tell m col no
        if (target == arr[rowNo][colNo])
        {
            cout << "found at " << rowNo << " " << colNo << " " << endl;
            return true;
        }
        else if (arr[rowNo][colNo] < target)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
        m = s + (e - s) / 2;
    }
    return false;
}
int main()
{

    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int row = 3;
    int col = 4;
    int target = 100;
    cout << bs(arr, row, col, target);

    return 0;
}