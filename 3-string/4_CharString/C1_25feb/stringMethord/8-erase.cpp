#include <algorithm>  //NOTE: header for the reverse function
#include <climits>
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  string s = "abcdefgh";
  s.erase(3);
  cout << s << endl;
  s = "abcdefgh";
  s.erase(4, 2);
  cout << s << endl;
  s = "This is an example sentence.";
  cout << s.size() << endl;
  s.erase(s.begin()+3, s.end()-9);//? (3 , 28-9=>19 char delete by it)
  cout << s << endl;

  return 0;
}
