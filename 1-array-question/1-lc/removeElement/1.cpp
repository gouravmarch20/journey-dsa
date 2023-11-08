#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
  int e = nums.size() - 1;
  int c = 0;  // M1 forgot total count return , need iteration till end
              // M2: length  1 of array
  if (nums.size() == 1) {
    if (nums[0] == val) {
      return 0;
    } else {
      return 1;
    }
  }

  for (int i = 0; i < nums.size(); i++) {
    // M3 : e > i , then only swap --> else target send to end recount

    if (nums[i] == val && e > i) {
      while ((nums[e] == val)) {
        --e;
        c++;  //^ end mai found
      }
      //^m5 Check if end is greater than i => before swap
      if (e > i) {
        swap(nums[i], nums[e]);
        e--;  //^m4 :  Update end after swapping
      }

      // found at i == e || i < e case
      c++;
    }
  }
  return nums.size() - c;//^ m0 ==> question
}

int main() {
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int res = removeElement(nums, 2);
  cout << "teh " << res;

  return 0;
}
