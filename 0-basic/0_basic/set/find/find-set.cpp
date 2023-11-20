#include <iostream>
#include <set>

using namespace std;

int main(void) {
  set<char> m = {'a', 'b', 'c', 'd'};

  auto it = m.find('b');

  if (it == m.end()) {
    cout << "Element not found";
  } else {
    //^ *it -> value , &(*it) -> value
    //~ it print giving error --> &it --> address get
    cout << "Iterator points to " << *it << " " << &(*it) << " " << &it << endl;
  }

  return 0;
}