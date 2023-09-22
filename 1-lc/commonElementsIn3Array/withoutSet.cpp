#include <iostream>
#include <set>
#include <vector>

using namespace std;  // Bring the std namespace into scope

int main() {
  int A[] = {1, 2, 2, 3, 4};
  int B[] = {2, 2, 3, 4, 4};
  int C[] = {2, 2, 4, 4, 5};
  int n1 = 5, n2 = 5, n3 = 5;

  int i, j, k;
  i = j = k = 0;
  vector<int> ans;


  while (i < n1 && j < n2 && k < n3) {
    if (A[i] == B[j] && B[j] == C[k]) {
        ans.push_back(A[i]);
      if (A[i] == A[i + 1]) {
        while (A[i] == A[i + 1]) {
          i++;
        }
      }
      i++, j++, k++;  // M forgot
    } else if (A[i] < B[j]) {
      i++;
    } else if (B[j] < C[k]) {
      j++;
    } else {
      k++;
    }
  }


  // Print the common elements
  for (auto element : ans) {
    cout << element << " ";
  }

  return 0;
}
