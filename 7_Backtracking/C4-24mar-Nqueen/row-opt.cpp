#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
unordered_map<int, bool> colCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;
bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    if (colCheck[col] == true)
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
void solve(vector<vector<char>> &board, int n, int row, vector<vector<string>> output)
{
    //
    if (row >= n)
    {
        printBoard(board, n);
        return;
    }
    for (int col = 0; col < n; col++)
    {

        if (isSafe(row, col, board, n))
        {
            board[row][col] = 'Q';
            colCheck[col] = true;
            upperLeftDiagonalCheck[n + 1 + col - row] = true;
            bottomLeftDiagonalCheck[row + col] = true;
            solve(board, n, row + 1, output);
            board[row][col] = '.';
        }
    }
}
void solveNQueens(int n)
{

    vector<vector<char>> board(n, vector<char>(n, '.'));

    vector<vector<string>> output;
    solve(board, n, 0, output);
}
int main()
{
    int n = 4;

    solveNQueens(n);

    return 0;
}
