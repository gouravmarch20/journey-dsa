#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s1 = "git ";
  string s2 = "macbook air ";
  string s3 = "dsa ";

  s1.append(s2);
  s1.append(s3);
  cout << s1;

  return 0;
}
