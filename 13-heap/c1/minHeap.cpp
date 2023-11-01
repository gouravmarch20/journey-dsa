#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  //   priority_queue<int> pq;  //
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(3);
  pq.push(6);
  pq.push(12);
  pq.push(2);
  cout << pq.top() << " ";
  pq.pop();
  cout << pq.top() << " ";
  pq.pop();
  cout << pq.top() << endl;

  cout << "the size is " << pq.size() << endl;
  cout << "is empty " << pq.empty() << endl;

  return 0;
}
