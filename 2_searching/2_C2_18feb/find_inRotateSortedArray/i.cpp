#include <iostream>
#include <vector>
using namespace std;
int bs(std::vector<int> &arr, int target, int s, int e)
{
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == target)
        {
            return m;
        }
        else if (target > arr[m])
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    return -1;
}

int findPivotIndex(std::vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        int m = s + ((e - s) / 2);

        if ((m + 1 < arr.size()) && arr[m] > arr[m + 1])
        {
            return m;
        }
        else if (m - 1 >= 0 && arr[m - 1] > arr[m])
        {
            return m - 1;
        }
        else if (arr[s] >= arr[m])
        {
            e = m;
        }
        else if (arr[s] < arr[m])
        {
            s = m + 1;
        }
    }
    return s;
}
int search(std::vector<int>& nums, int target) {
    int pivot = findPivotIndex(nums);
    if (target >= nums[0] && target <= nums[pivot])
    {
        cout << "case 2" << endl;

        int ans = bs(nums, target, 0, pivot);
        return ans;
    }
    // ^ pre optimized => if in range of sorted array then only find
    if (pivot + 1 < nums.size() && target >= nums[pivot + 1] && target <= nums[nums.size() - 1])
    {
        cout << "case 2" << endl;
        int ans = bs(nums, target, pivot + 1, nums.size() - 1);
        return ans;
    }
    return -1;
}

int main()
{
    std::vector<int> nums = {1, 3};
    // std::vector<int> nums = {5, 1, 3};
    int target = 1;
    int result = search(nums, target);
    std::cout << "Result: " << result << std::endl;


    int pivot = findPivotIndex(nums);


    return 0;
}
