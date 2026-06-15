// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void solve() {
  int n, m, sum = 0;
  cin >> n >> m;
  vector<int> x(n), dist(n - 1);

  if (m >= n) {
    cout << 0 << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  // ordenamos y calculamos distancias
  sort(x.begin(), x.end());
  for (int i = 0; i < n - 1; i++) {
    dist[i] = x[i + 1] - x[i];
  }
  // ordenamos distancias y sumamos las más pequeñas
  sort(dist.begin(), dist.end());
  for (int i = 0; i < n - m; i++) {
    sum += dist[i];
  }
  cout << sum << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
