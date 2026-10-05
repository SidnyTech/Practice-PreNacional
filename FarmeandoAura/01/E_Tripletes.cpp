/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using sp = set<pll>;
#define F first
#define S second
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n;
  cin >> n;
  vpll c(n);
  sp b;

  forn(i, n) {
    cin >> c[i].F >> c[i].S;
    b.insert(c[i]);
  }

  ll ans = 0;
  forn(i, n - 1) {
    fore(j, i + 1, n) {
      ll sx = c[i].F + c[j].F;
      ll sy = c[i].S + c[j].S;
      if (sx % 2 != 0 || sy % 2 != 0) continue;
      if (b.count({ sx / 2, sy / 2 })) ++ans;
    }
  }
  cout << ans << "\n";
}

int main() {
  FAST_IO;
  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/