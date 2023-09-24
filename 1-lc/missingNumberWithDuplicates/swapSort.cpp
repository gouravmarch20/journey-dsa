#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int missingNoWithDuplicates(vector<int>& nums) {
  int i = 0;
  while (i < nums.size()) {//NOTE: controlled running of i stop if cross
    int index = nums[i] - 1;

    if (nums[i] != nums[index]) {// NOTE stuck in self code of i managing
      swap(nums[i], index);  
    } else {
      i++;
    }
  }


  for (int i = 0; i < nums.size(); i++)
  {
    if (i+1 != nums[i])
    {
        cout << "missin " << i +1 << endl;
    }
    
  }
  

  return 1;
}

;

int main() {
  vector<int> nums = {1, 3, 3, 5, 3};
  missingNoWithDuplicates(nums);
  return 0;
}
