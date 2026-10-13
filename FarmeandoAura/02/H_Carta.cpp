/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define nl "\n"
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

constexpr int MAXN = 1e5 + 5;

void solve() {
  string s;
  cin >> s;

  int ans = MAXN, n = sz(s);
  vi pref(n + 2, 0);
  forn(i, n) if (isupper(s[i])) pref[i + 1] = 1;
  fore(i, 1, n + 1) pref[i] += pref[i - 1];

  fore(i, 1, n + 2) {
    int cambIz = i - pref[i - 1] - 1;
    int cambDer = pref[n] - pref[i - 1];
    int camb = cambIz + cambDer;
    ans = min(ans, camb);
  }
  cout << ans << nl;
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