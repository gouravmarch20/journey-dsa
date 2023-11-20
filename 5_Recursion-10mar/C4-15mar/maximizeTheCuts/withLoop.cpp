#include <limits.h>

#include <iostream>
#include <vector>
using namespace std;

int solve(int n, int x, int y, int z, int k) {
  // base case
  if (n == 0) {
    return 0;
  }

  if (n < 0) {
    return INT_MIN;
  }

  int ans1 = solve(n - x, x, y, z, k) + 1;
  int ans2 = solve(n - y, x, y, z, k) + 1;
  int ans3 = solve(n - z, x, y, z, k) + 1;
  int ans4 = solve(n - k, x, y, z, k) + 1;

  int ans = max(ans1, max(ans2, ans3));
  return ans;
}

int main() {
  int n = 7;
  int x = 2;
  int y = 3;
  int z = 1;
  int k = 4;

  // solve function -> returns maximum number of segments
  int ans = solve(n, x, y, z, k);
  // ans -> valid && invalid

  if (ans < 0) ans = 0;
  cout << "Answer is: " << ans << endl;

  return 0;
}