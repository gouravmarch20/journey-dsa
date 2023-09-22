#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> nums) {
  int ans = -1;

  for (int i = 0; i < nums.size(); i++) {
    int index = abs(nums[i]);//^ can not visit negative index
    // if already visited
    if (nums[index] < 0) {
      ans = index;
      break;
    }
    nums[index] *= -1;  //NOTE : syntax ease , marked that this is visited 
  }
  return ans;

  //   int i = 0;
  //   while (true) {
  //     int next = nums[i];
  //     if(nums[i] < 0){
  //         return nums[i];
  //     }
  //     nums[i] = -(nums[i]);
  //     i = next;
  //   }
};

int main() {
  vector<int> nums = {1, 3, 3, 4, 2};
  int res = findDuplicate(nums);
  cout << "the ans is " << res;
  return 0;
}
