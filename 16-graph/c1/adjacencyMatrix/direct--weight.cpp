#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int adj[n + 1][m + 1];
  for (int i = 0; i < n; i++) {
    int u, v, weight;
    cin >> u >> v >> weight;
    //^   it's directed graph
    adj[u][v] = weight;
  }
  return 0;
}
