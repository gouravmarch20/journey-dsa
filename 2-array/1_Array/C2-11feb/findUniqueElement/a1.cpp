#include <iostream>
#include <vector>
using namespace std;
int findUniqueElement(vector<int> arr)
{
    int ans = 0; // initialized with 0 as xor with 0 will give the number itself (a^0 = a)
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i]; // xor all the elements and cancelling repeated elements and at the end we get unique element
    }
    return ans;
}
int main()
{
    int n = 5;
    vector<int> arr{1, 4, 1, 3, 3}; //^ fill with 0 all inital
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << "Enter the elements " << i << " ";
    //     cin >> arr[i];
    // }
    int uniqueElement = findUniqueElement(arr);
    cout << "Unique element in the array is " << uniqueElement << endl;
    return 0;
}