#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<string>> ans;
bool isSafe(int i, int j, vector<string> &board)
{
    // top left diagonal
    int x = i;
    int y = j;
    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y--;
    }

    // upward
    x = i;
    y = j;
    while (x >= 0)
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        x--;
    }
    // top right diagonal
    x = i;
    y = j;
    while (x >= 0 && y < board.size())
    {
        if (board[x][y] == 'Q')
        {
            return false;
        }
        x--;
        y++;
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
void solve(int row, int n, vector<string> &board)
{
    //
    if (row >= n)
    {
        ans.push_back(board);
        return;
    }
    for (int j = 0; j < n; j++)
    {

        if (isSafe(row, j, board))
        {
            board[row][j] = 'Q';
            solve(row + 1, n, board);
            board[row][j] = '.';
        }
    }
}

void solveNQueens(int n)
{
    string temp;
    for (int i = 0; i < n; i++)
    {
        // temp.push_back(".");
        temp += ".";
    }

    vector<string> board(n, temp);

    vector<vector<string>> output;
    solve(0, n, board);
   
}
int main()
{
    int n = 4;

    solveNQueens(n);

    for (int i = 0; i < ans.size() ; i++)
    {
        for (int j = 0; j < ans[0].size() ; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
