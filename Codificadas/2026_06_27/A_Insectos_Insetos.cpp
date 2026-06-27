/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 4e18;

void solve() {
  ll A, a, b, minx = INF, maxx = -INF, miny = INF, maxy = -INF, n;
  cin >> n;
  while (n--) {
    ll x, y;
    cin >> x >> y;

    minx = min(minx, x);
    maxx = max(maxx, x);
    miny = min(miny, y);
    maxy = max(maxy, y);
  }
  A = (maxx - minx) * (maxy - miny);
  a = (maxx - minx);
  b = (maxy - miny);

  cout << A << " " << a << " " << b << "\n";
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