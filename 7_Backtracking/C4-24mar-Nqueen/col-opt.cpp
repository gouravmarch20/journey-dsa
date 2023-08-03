#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;
bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    if (rowCheck[row] == true)
    {
        return false;
    }
    if (upperLeftDiagonalCheck[n + 1 + col - row] == true)
    {
        return false;
    }
    if (bottomLeftDiagonalCheck[row + col] == true)
    {
        return false;
    }
    return true;
}
void printBoard(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}
void solve(vector<vector<char>> &board, int col, int n)
{
    //
    if (col >= n)
    {

        printBoard(board, n);
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(board, row, col, n))
        {
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n + 1 + col - row] = true;
            bottomLeftDiagonalCheck[row + col] = true;
            //
            solve(board, col + 1, n);
            //
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n + 1 + col - row] = false;
            bottomLeftDiagonalCheck[row + col] = false;
            board[row][col] = '-';
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);

    return 0;
}
