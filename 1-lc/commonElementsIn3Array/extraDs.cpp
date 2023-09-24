#include <iostream>
#include <set>
#include <vector>
//B: getting error
using namespace std;  // Bring the std namespace into scope

int main() {
  int A[] = {1, 2, 2, 3, 4};
  int B[] = {2, 2, 3, 4, 4};
  int C[] = {2, 2, 4, 4, 5};
  int n1 = 5, n2 = 5, n3 = 5;

  int i, j, k;
  i = j = k = 0;
  vector<int> ans;
  set<int> st;//^ l1: unique case handle by set

  while (i < n1 && j < n2 && k < n3) {
    // if(A[i] == B[j] == C[k]){//M1 : comparison operator true false return
    //only two number , && need to use

    if (A[i] == B[j] && B[j] == C[k]) {
      st.insert(A[i]);//^ forgot
      i++, j++, k++;//NOTE set have insert not push_back
    } else if (A[i] < B[j]) {
      i++;
    } else if (B[j] < C[k]) {
      j++;
    } else {
      k++;
    }
  }

  for (auto i : st) {//NOTE set iteration in cpp
    ans.push_back(i);
  }

  // Print the common elements
  for (int element : ans) {
    cout << element << " ";
  }

  return 0;
}
