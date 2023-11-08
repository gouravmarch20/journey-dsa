#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int missingNoWithDuplicates(vector<int>& nums) {
  int ans = 0;
  for (int i = 0; i < nums.size(); i++) {
    int index = abs(nums[i]);
    if (nums[index - 1] > 0) {  // M avoid duplicate case -> -ve * -ve => +ve
      nums[index - 1] *= -1;    // M miss index +1
    }
  }
  for (int i = 0; i < nums.size(); i++) {
    // NOTE all positive are missing numbers
    if (nums[i] > 0) {
      cout << "missing no " << i + 1 << endl;  // M forgot +1 in ans
    }
  }

  return 1;
  //   for (int i = 0; i < nums.size(); i++) {
  //     if (nums[i] > 0) {
  //       ans = nums[i];
  //     }
}

;

int main() {
  vector<int> nums = {1, 3 , 3 , 3 , 3};
  missingNoWithDuplicates(nums);
  return 0;
}
