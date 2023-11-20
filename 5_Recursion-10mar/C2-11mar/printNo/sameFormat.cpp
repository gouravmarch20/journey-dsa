#include <iostream>
#include <vector>
using namespace std;

void printNo(int &no) {
  // base case
  if (no == 0) return;

  // 1 case solve krdo
  int d = no % 10;  //^ store in stack locally until function not end
  no = no / 10;

  // baaki recursion sambhal lega
  printNo(no);
  cout << d << " ";
}

int main() {
  //   int no = 0647;//NOTE octal digit in cpp --> leading 0
  int no = 647;
  if (no == 0) {
    cout << 0 << endl;
  }

  printNo(no);

  return 0;
}