/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/group/5rSviDruPP/contest/657127/problem/B
*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
  int cnT = 0, cnC = 0, cnS = 0;
  string s;
  cin >> s;

  for (auto &c : s) {
    if (c == 'T')
      cnT++;
    if (c == 'C')
      cnC++;
    if (c == 'S')
      cnS++;
  }

  if (cnT == cnC && cnC == cnS)
    cout << "YES" << '\n';
  else
    cout << "NO" << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/