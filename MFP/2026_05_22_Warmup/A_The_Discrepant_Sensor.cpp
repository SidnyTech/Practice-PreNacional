/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k1, k2, k3;
  cin >> k1 >> k2 >> k3;

  if (k1 == k2 && k1 != k3) {
    cout << k3 << "\n";
  } else if (k2 == k3 && k2 != k1) {
    cout << k1 << "\n";
  } else {
    cout << k2 << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/