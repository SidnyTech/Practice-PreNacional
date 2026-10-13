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
  int n, x, p;
  cin >> n >> x >> p;

  int corr = x * 3;
  int incorr = (n - x) * (-1);
  int total = corr + incorr;

  if (total >= p) {
    cout << "PASS\n";
  } else {
    cout << "FAIL\n";
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