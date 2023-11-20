#include <cmath>
#include <iostream>

using namespace std;

int bulbSwitch(int n) {
  int count = 0;
  //^ counting all perfect square 
  for (int i = 1; i * i <= n; i++) {
    count++;
  }
  return count;
}

int main() {
  int n = 5;

  int result = bulbSwitch(n);
  cout << "The number of bulbs on after " << n << " rounds is: " << result
       << endl;

  return 0;
}
