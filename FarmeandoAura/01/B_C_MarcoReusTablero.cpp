/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  ll n;
  cin >> n;
  vll sumF(n), sumC(n);

  forn(i, n) {
    forn(j, n) {
      ll x;
      cin >> x;
      sumC[j] += x;
      sumF[i] += x;
    }
  }
  sort(all(sumF));

  ll ans = 0;
  forn(i, n) {
    ans += lower_bound(all(sumF), sumC[i]) - sumF.begin();
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