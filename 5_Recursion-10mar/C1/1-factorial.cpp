#include <iostream>
using namespace std;

int factorial(int n) {
  // base case
  if (n == 1) return 1;

  int chotiProblemAns = factorial(n - 1);
  int badiProblemAns = n * chotiProblemAns;

  return badiProblemAns;
}

int main() {
  int n = 5;

  int ans = factorial(n);

  cout << "Answer is: " << ans << endl;

  return 0;
}