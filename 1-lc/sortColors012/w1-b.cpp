#include <iostream>
#include <vector>
using namespace std;
void sort012(vector<int> a) {
  // code here

  int zp = 0;
  int tp = a.size() - 1;
  int i = 0;
  while (i <= tp) {  //! m1 not used equal to sign
    if (a[i] == 0) {
      swap(a[i], a[zp]);  //^m2 forgot swap
      zp++;
      i++;
    } else if (a[i] == 2) {
      swap(a[i], a[tp]);
      tp--;
    } else if (a[i] == 1) {
      i++;  //^m3  not handle
    }
  }
}
int main()

{
  vector<int> nums{1, 2, 0};
  sort012(nums);

  return 0;
}