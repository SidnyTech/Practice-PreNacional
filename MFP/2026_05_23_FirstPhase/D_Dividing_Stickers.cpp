/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

void solve() {
  ll n, resultgcd = 0, ans = 0;
  cin >> n;
  vll a(n);

  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    resultgcd = gcd(resultgcd, a[i]);
  }

  if (n == 1) {
    cout << 1 << "\n";
    return;
  }

  for (int i = 0; i < n; ++i)
    ans += a[i] / resultgcd;

  cout << ans << "\n";
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