#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int srcX, int srcY, int row, int col, int maze[3][3], vector<vector<bool>> &visited)
{
    //
    if (
        // range avoid out of bound
        //! m2: miss use of >=

        (srcX >= 0 && srcX < row) && (srcY >= 0 && srcY < col) &&
        // avoid infinite loop case => not go back
        (visited[srcX][srcY] == false) &&
        // is allow to come here
        (maze[srcX][srcY] == 1))
    {
        //
        return true;
    }
    else
    {
        return false;
    }
}
// !m3 : return type of function is wrong
void solveMaze(int maze[3][3], int row, int col, int srcX, int srcY, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    // base case
    if (srcX == row - 1 && srcY == col - 1)
    {
        path.push_back(output);
        return;
    }
    // down>> srcX + 1, srcY
    if (isSafe(srcX + 1, srcY, row, col, maze, visited))
    {
        visited[srcX + 1][srcY] = true;
        solveMaze(maze, row, col, srcX + 1, srcY, visited, path, output + 'D');
        visited[srcX + 1][srcY] = false;
    }

    // left>>  srcX , srcY-1
    if (isSafe(srcX, srcY - 1, row, col, maze, visited))
    {
        visited[srcX][srcY - 1] = true;
        solveMaze(maze, row, col, srcX, srcY - 1, visited, path, output + 'L');
        visited[srcX][srcY - 1] = false;
    }
    // right >> srcX , srcY + 1
    if (isSafe(srcX, srcY + 1, row, col, maze, visited))
    {
        visited[srcX][srcY + 1] = true;
        solveMaze(maze, row, col, srcX, srcY + 1, visited, path, output + 'R');
        visited[srcX][srcY + 1] = false;
    }
    // up >> srcX - 1 , srcY
    if (isSafe(srcX - 1, srcY, row, col, maze, visited))
    {
        visited[srcX - 1][srcY] = true;
        solveMaze(maze, row, col, srcX - 1, srcY, visited, path, output + 'U');
        visited[srcX - 1][srcY] = false;
    }
};

int main()
{
    int maze[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1},
    };
    int row = 3;
    int col = 3;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    visited[0][0] = true; // starting position mark true
    vector<string> path;
    string output = "";
    int r = 0;
    int j = 0;
    //! m1: forgot this case

    if (maze[0][0] == 0 || maze[row - 1][col - 1] == 0)
    {
        cout << "No path exists." << endl;
    }
    else
    {
        solveMaze(maze, row, col, 0, 0, visited, path, output);
        for (auto &&i : path)
        {
            cout << i << " ";
        }
    }

    return 0;
}
