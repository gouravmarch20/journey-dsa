#include <iostream>
#include <vector>
using namespace std;
void sortColor(vector<int> &nums)
{
    int l = 0;//low
    int h = nums.size() - 1;//high
    int m = 0;//medium

    while (m <= h)//^ m1 : must have equal to sign --> dry run [2,0,1] 
    {
        if (nums[m] == 0)
        {
            swap(nums[m], nums[l]);
            m++;
            l++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else if (nums[m] == 2)
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
};
int main()

{
    vector<int> nums{1, 2, 0};
    sortColor(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}