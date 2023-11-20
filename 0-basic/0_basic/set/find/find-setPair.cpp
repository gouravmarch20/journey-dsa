#include <iostream>
#include <set>
#include <string>
#include <utility>
using namespace std;
int main() {
  pair<int, int> p1(1, 0);
  pair<int, int> p2(2, 1);
  pair<int, int> p3(3, 2);
  set<pair<int, int>> s;
  s.insert(p1);
  s.insert(p2);

  auto it = s.find(p1);

  if (s.end() != it) {
    cout << &it << endl;
    cout << "find " << it->first << "," << it->second << endl;
  } else {
    cout << "not found" << endl;
  }
  auto it1 = s.find(p3);
  if (s.end() != it1) {
    cout << &it1 << endl;
    cout << "find " << it1->first << "," << it1->second << endl;
  } else {
    cout << "not found" << endl;
  }
}
