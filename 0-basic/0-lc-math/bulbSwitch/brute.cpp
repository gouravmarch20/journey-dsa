#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int bulbSwitch(int n) {
  //M n+1 miss  --> 0 to n-1 , index for n size ==>  so n+1 array create
  //^M2 forgot syntax : how to assign false to each array
  vector<bool> bulbs(n + 1, false);
  int c = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) {
      bulbs[j] = !bulbs[j];
    }
  }
  for (int i = 1; i < n; i++) {
    if (bulbs[i]) {
      c++;
    }
  }
  return c;
}

int main() {
  int n = 5;

  int result = bulbSwitch(n);
  cout << "The number of bulbs on after " << n << " rounds is: " << result
       << endl;

  return 0;
}
