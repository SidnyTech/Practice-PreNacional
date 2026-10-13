/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n, x, y;
  cin >> n >> x >> y;

  int cargan = (n + 1) * y;
  if (cargan >= x) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  FAST_IO;

  int t;
  cin >> t;
  while (t--) solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/