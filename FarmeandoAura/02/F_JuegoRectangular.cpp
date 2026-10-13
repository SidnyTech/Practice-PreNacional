/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using qi = queue<int>;
#define nl "\n"
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

qi trialDiv(ll n) {
  qi factores;
  for (ll d = 2; d * d <= n; ++d) {
    while (n % d == 0) {
      factores.push(d);
      n /= d;
    }
  }
  if (n > 1) factores.push(n);

  return factores;
}

void solve() {
  ll n;
  cin >> n;

  qi g = trialDiv(n);
  ll ans = n;

  while (!g.empty()) {
    n /= g.front();
    ans += n;
    g.pop();
  }
  cout << nl << ans << nl;
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