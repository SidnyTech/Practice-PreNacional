/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;
  unordered_map<string, int> id;
  id.reserve(n * 2);
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    id[s] = i;
  }
  vector<vector<int>> g(m);
  string line;
  getline(cin, line);

  for (int i = 0; i < m; i++) {
    getline(cin, line);
    stringstream ss(line);
    string ing;
    while (ss >> ing) {
      if (id.count(ing)) {
        g[i].push_back(id[ing]);
      }
    }

    if (g[i].empty()) {
      cout << "De compras!\n";
      return;
    }
  }

  vector<int> match(n, -1);
  vector<bool> used;

  function<bool(int)> dfs = [&](int u) {
    for (int v : g[u]) {
      if (used[v])
        continue;
      used[v] = true;
      if (match[v] == -1 || dfs(match[v])) {
        match[v] = u;
        return true;
      }
    }
    return false;
  };

  for (int i = 0; i < m; i++) {
    used.assign(n, false);
    if (!dfs(i)) {
      cout << "De compras!\n";
      return;
    }
  }

  cout << "A cocinar!\n";
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
