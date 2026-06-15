// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, x;
  cin >> n;
  vector<int> d(n);

  // meter al arreglo sumado al anterior
  for (int i = 1; i < n; i++) {
    cin >> x;
    d[i] = d[i - 1] + x;
  }
  // ir vaciando el arreglo
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cout << d[j] - d[i] << " ";
    }
    cout << endl;
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/