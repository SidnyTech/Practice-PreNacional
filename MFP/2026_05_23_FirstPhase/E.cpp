/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>
#define vvll vector<vector<ll>>
const ll INF = 4e18;

void solve() {
  ll n, p, s, t[3], d[3];
  cin >> n >> p >> s;
  for (ll &x : t) cin >> x;
  for (ll &x : d) cin >> x;

  vvll dp(n + 1, vll(s + 2, INF));
  dp[0][0] = 0;

  for (ll lap = 0; lap < n; lap++) {
    for (ll stops = 0; stops <= s; stops++) {
      if (dp[lap][stops] == INF) continue;

      for (int tipo = 0; tipo < 3; tipo++) {
        for (ll vueltas = 1; vueltas <= d[tipo] && lap + vueltas <= n; vueltas++) {
          ll nueva_lap = lap + vueltas;
          ll costo = dp[lap][stops] + vueltas * t[tipo];

          if (nueva_lap == n) {
            dp[nueva_lap][stops] = min(dp[nueva_lap][stops], costo);
          } else if (stops + 1 <= s) {
            dp[nueva_lap][stops + 1] = min(dp[nueva_lap][stops + 1], costo + p);
          }
        }
      }
    }
  }

  ll ans = INF;
  for (ll stops = 0; stops <= s; stops++)
    ans = min(ans, dp[n][stops]);
  cout << ans << '\n';
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