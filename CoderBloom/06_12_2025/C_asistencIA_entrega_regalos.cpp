/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;

  vector<int> orden(n);
  for (int i = 0; i < n; i++) {
    cin >> orden[i];
  }
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++) {
    v.push_back({orden[i], i});
  }
  sort(v.begin(), v.end(), [](auto &a, auto &b) {
    if (a.first != b.first)
      return a.first > b.first;
    return a.second < b.second;
  });
  vector<bool> entrega(n, false);
  int visitas = 0;

  for (auto [r, i] : v) {
    if (entrega[i])
      continue;
    visitas++;
    for (int j = i - 1; j <= i + 1; j++) {
      if (j >= 0 && j < n)
        entrega[j] = true;
    }
  }

  cout << visitas << endl;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/
