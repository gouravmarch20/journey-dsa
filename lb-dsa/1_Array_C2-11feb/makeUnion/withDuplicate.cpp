
#include <iostream>
#include <vector>
using namespace std;
bool ls(vector<int> ans, int target)
{
    for (int i = 0; i < ans.size(); i++)
    {
        if (target == ans[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;
    int brr[] = {2, 4, 6, 8};
    int sizeb = 4;
    vector<int> ans;
    // putting array elements of arr in ans array
    for (int i = 0; i < sizea; i++)
    {
        ans.push_back(arr[i]);
    }
    //^ putting array elements of brr if not in ans
    for (int i = 0; i < sizeb; i++)
    {
        if (ls(ans, arr[i]))
        {
            ans.push_back(brr[i]);
            // x
        }
    }
    // printing ans array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}