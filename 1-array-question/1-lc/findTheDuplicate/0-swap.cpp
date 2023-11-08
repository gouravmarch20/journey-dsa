#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> nums) {
  while (nums[0] != nums[nums[0]]) {
    swap(nums[0], nums[nums[0]]);
  }
  return nums[0];
};

int main() {
  vector<int> nums = {1, 3, 3, 4, 2};
  int res = findDuplicate(nums);
  cout << "the ans is " << res;
  return 0;
}
