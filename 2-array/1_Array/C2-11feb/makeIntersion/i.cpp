#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
void findIntersection(vector<int> arr, vector<int> arr1, vector<int> ans)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr1.size(); j++)
        {
            if (arr[i] == arr1[j])
            {
                cout << "hello" << arr[i] << arr[j] << endl;
                arr1[j] = INT_MIN; // to handle the duplicate case

                ans.push_back(arr[i]);
                break;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int n = 5;
    vector<int> arr{2, 4, 1, 3, 3};
    vector<int> arr1{4, 3 , 3};
    vector<int> ans{};

    findIntersection(arr, arr1, ans);
    for (auto &&i : ans)
    {
        cout << i;
    }

    // cout << "Unique element in the array is " << ans << endl;
    return 0;
}