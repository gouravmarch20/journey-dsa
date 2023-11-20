#include <algorithm>  //NOTE: header for the reverse function
#include <climits>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void toHex(){

};

int main() {
  string s = "abcde";

  reverse(s.begin(), s.end());
  cout << s;

  return 0;
}
