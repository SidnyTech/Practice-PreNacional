/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void solve() {
  int n, k;
  double ans = 1.0;
  cin >> n >> k;
  vi d(n);

  for (int i = 0; i < n; ++i) {
    cin >> d[i];
    ans *= ((double)min(k - 1, d[i]) / d[i]);
  }

  cout << fixed << setprecision(15) << 1.0 - ans << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/