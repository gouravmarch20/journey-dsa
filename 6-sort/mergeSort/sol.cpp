#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
    void merge(vector<int> &nums, int low, int m, int high)
    {

        vector<int> temp;
        int p1 = low;
        int p2 = m + 1;

        while (p1 <= m && p2 <= high)
        {
            if (nums[p1] <= nums[p2])
            {
                temp.push_back(nums[p1]);
                p1++;
            }
            else if (nums[p2] < nums[p1])
            {
                temp.push_back(nums[p2]);
                p2++;
            }
        }
        while (p1 <= m)
        {
            temp.push_back(nums[p1]);
            p1++;
        }
        while (p2 <= high)
        {
            temp.push_back(nums[p2]);
            p2++;
        }
        for (int i = 0; i < temp.size(); i++)
        {
            //? if low = 2 , end = 4 then fill
            nums[low + i] = temp[i];
        }
    }
    void mergeS(vector<int> &nums, int low, int high)
    {
        int m = (low + high) / 2;
        //! m1:: base case
        //  if (low == m || m   == high) {
        if (low >= high)
        {
            return;
        }

        mergeS(nums, low, m);

        mergeS(nums, m + 1, high);
        merge(nums, low, m, high);
    }

    vector<int> mergeSort(vector<int> &nums)
    {
        int n = nums.size() - 1;
        mergeS(nums, 0, n);
        return nums; // Add a return statement here
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {5, 2, 9, 1, 5, 6};
    vector<int> sorted = solution.mergeSort(nums);

    for (int num : sorted)
    {
        cout << num << " ";
    }

    return 0;
}