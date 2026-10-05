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
  int x, y;
  cin >> x >> y;

  int ans = min(x / 2, y);
  cout << ans << "\n";
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