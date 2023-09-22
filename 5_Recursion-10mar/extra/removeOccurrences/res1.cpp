#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;
// M2 :void return type
void removeOccurrences(string& s, string& part) {
  int found = s.find(part);
  if (found != string::npos) {  //^M1 find working forgot

    string leftSide = s.substr(0, found);
    string rightSide = s.substr(found + part.size(), s.length());//^M3 part.size() forgot 
    s = leftSide + rightSide;
    removeOccurrences(s, part);
  } else {
    return;
  }
};

int main() {
  string part = "xy";
  string s = "axxxxyyyyb";
  removeOccurrences(s, part);
  cout << s  << endl;
  return 0;
}
