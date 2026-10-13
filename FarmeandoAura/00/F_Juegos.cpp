/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n, m;
  cin >> n >> m;
  vi f(n), b(m);

  forn(i, n) cin >> f[i];
  forn(i, m) cin >> b[i];

  int pf = 0, pb = 0;
  bool ok = true;
  int ans = 1;

  while (pf < n && pb < m) {
    if ((ok && b[pb] < f[pf]) || (!ok && b[pb] > f[pf])) {
      ++ans;
      if (ok) ++pb;
      else ++pf;
      ok = !ok;
    } else {
      if (ok) ++pf;
      else ++pb;
    }
  }
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