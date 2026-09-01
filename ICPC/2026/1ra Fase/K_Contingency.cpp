/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/gym/106679/problem/K
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

constexpr int MAXN = 1e6 + 5;

void solve() {
  ll n, ans = -1, sum = 0;
  cin >> n;
  vll c(n), k(n);

  forn(i, n) {
    cin >> c[i];
    sum += c[i];
  }
  forn(i, n) {
    cin >> k[i];
    if (k[i] > c[i]) {
      cout << -1 << "\n";
      return;
    }
    ans = max(ans, sum + k[i] - c[i]);
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