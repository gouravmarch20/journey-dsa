#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //^ 2d array
    vector<vector<int>> arr(5, vector<int>(5, 2));
    for (int r = 0; r < arr.size(); r++)
    {
        for (int c = 0; c < arr.size(); c++)
        {
            cout << arr[r][c];
        }
        cout << endl;
    }
    return 0;
}