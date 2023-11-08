#include <iostream>
#include <vector>
using namespace std;
void segregate0and1(vector <int> arr) {
  // code here
  int low = 0;
  int high = arr.size() - 1;
  while (low < high) {
    if (arr[low] == 0) {
      low++;
    } else if (arr[high] == 1) {
      high--;
    } else {
      swap(arr[low++], arr[high--]);
    }
  }
}
int main()

{
  vector<int> nums{1, 2, 0};
  segregate0and1(nums);

  return 0;
}