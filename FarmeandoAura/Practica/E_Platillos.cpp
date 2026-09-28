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
  int n, s;
  cin >> n >> s;

  if (s <= n) {
    cout << s << '\n';
  } else {
    int ans = abs(n - s) - n;
    cout << abs(ans) << '\n';
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