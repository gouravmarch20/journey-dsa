#include <iostream>
#include <vector>

using namespace std;

int main() {
  string s1 = "hello ";
  string s2 = "-mate";
  string s3 = "--air";
  s1.insert(3, s2);
  s1.insert(5, s3);
  cout << s1 << endl;

  return 0;
}
