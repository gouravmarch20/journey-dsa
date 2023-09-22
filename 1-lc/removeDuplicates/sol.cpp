#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
  int e = nums.size() - 1;
  int c = 0;  // Count for non-val elements
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == val) {
      while (nums[e] == val && e > i) {
        --e;
        c++;  // Count val elements found at the end
      }
      // Check if end is greater than i => before swap
      if (e > i) {
        swap(nums[i], nums[e]);
        e--;  // Update end after swapping
      }
      // Found at i == e || i < e case
      c++;
    }
  }
  return nums.size() - c;  // Return the count of remaining non-val elements
}

int main() {
  vector<int> nums = {3, 2, 2, 3, 4, 5, 3, 6};
  int val = 3;

  int result = removeElement(nums, val);

  cout << "Updated vector: ";
  for (int i = 0; i < result; i++) {
    cout << nums[i] << " ";
  }
  cout << "\nNew length: " << result << endl;

  return 0;
}
