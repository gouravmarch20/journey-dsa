#include <algorithm>
#include <climits>
#include <deque>
#include <iostream>
#include <queue>
#include <stack>
#include <unordered_map>
#include <vector>

using namespace std;

void toHex(){

};

int main() {
  // creation
  unordered_map<string, int> m;
  // insertion - 1
  pair<string, int> p = make_pair("nexon", 0);
  m.insert(p);
  //   insertion - 2
  pair<string, int> p2("alto", 2);
  m.insert(p2);
  //~ best way insertion way 3 rd
  m["duster"] = 5;

  //   access
  cout << m.at("duster") << endl;
  cout << m["duster"] << endl;
  //   ~ undefined access
  cout << m["apple"]
       << endl;  //^ not found mai it create that key , 0 insert as value
  //   cout << m.at("2") << endl;//^ not found error it give

  // search --> 0 , 1 return , find mai 1
  cout << "is found " << m.count("macbook") << endl;
  // find  method
  if (m.find("duster") != m.end()) {
    cout << "found on map " << endl;
  } else {
    cout << "not found" << endl;
  }

  // size
  cout << "map size " << m.size() << endl;

  cout << "-----> printing map <------" << endl;
  //   looping
  for (auto i : m) {
    cout << i.first << " --- " << i.second << endl;  // M avoid ()
  }
  return 0;
}
