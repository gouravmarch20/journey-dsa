#include <iostream>
#include <vector>

using namespace std;

bool isSafe(int srcX, int srcY, int row, int col, vector<vector<int>> &maze, vector<vector<bool>> &visited)
{
    //
    if (
        // range avoid out of bound
        (srcX >= 0 && srcX < row) && (srcY >= 0 && srcY < col) &&
        // avoid infinite loop case => not go back
        visited[srcX][srcY] == false &&
        // is allow to come here
        maze[srcX][srcY] == 1)
    {
        //
        return true;
    }
    else
    {
        return false;
    }
}

void solveMaze(vector<vector<int>> &maze, int row, int col, int srcX, int srcY, vector<vector<bool>> &visited, vector<string> &path, string output)

{
    // base case
    if (srcX == row - 1 && srcY == col - 1)
    {
        path.push_back(output);
        return;
    }

    //
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    char direction[] = {'D', 'L', 'R', 'U'};
    //
    for (int i = 0; i < row; i++)
    {
        int newX = dx[i] + srcX;
        int newY = dy[i] + srcY;
        char dir = direction[i];    
        if (isSafe(newX, newY, row, col, maze, visited))
        {
            visited[newX][newY] = true;
            solveMaze(maze, row, col, newX, newY, visited, path, output + dir);
            visited[newX][newY] = false; // Backtrack
        }
    }
};
 
int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1},
    };
    // ^ optimize
    int dx[4] = {1, 0, 0, -1};
    int dy[4] = {0, -1, 1, 0};
    char direction[] = {'D', 'L', 'R', 'U'};

    int row = 3;
    int col = 3;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    visited[0][0] = true; // starting position mark true
    vector<string> path;
    string output = "";
    int r = 0;
    int j = 0;

    if (maze[0][0] == false || maze[2][2] == false)
    {
        cout << "no path exits" << endl;
    }
    solveMaze(maze, row, col, 0, 0, visited, path, output);
    for (auto &&i : path)
    {
        cout << i << " ";
    }

    return 0;
}
