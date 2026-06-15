/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

map<string, int> mp;

void solve(bool first) {
  int n;
  cin >> n;
  map<string, int> names;
  while (n--) {
    string s;
    cin >> s;
    names[s]++;
  }
  if (first) {
    mp = names;
    return;
  }
  for (auto it = mp.begin(); it != mp.end();) {
    if (names.find(it->first) == names.end()) {
      it = mp.erase(it);
    } else {
      it->second += names[it->first];
      ++it;
    }
  }
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  mp.clear();
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
    solve(i == 0);

  vector<pair<string, int>> vec(mp.begin(), mp.end());
  sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
    if (a.second == b.second)
      return a.first > b.first;
    return a.second > b.second;
  });

  for (auto &p : vec) {
    cout << p.first << endl;
  }
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/