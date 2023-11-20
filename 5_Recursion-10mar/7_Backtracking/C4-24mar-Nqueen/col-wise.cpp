#include <iostream>
#include <vector>

using namespace std;
bool isSafe(vector<vector<char>> &board, int row, int col, int n)
{
    // ! need dynamic value of row , col --> in checking not over-ride later issue
    int i = row;
    int j = col;
    // check row --> to avoid same column
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }

        j--;
    }
    //^ forgot to reassign
    i = row;
    j = col;
    // upper left -> diagonal safe
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }

        i--;
        j--;
    }
    // bottom left ->  diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }

        j--;
        i++;
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
            solve(board, col + 1, n);
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
