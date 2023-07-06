#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr;
    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6};
    vector<int> c{7, 8, 9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

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