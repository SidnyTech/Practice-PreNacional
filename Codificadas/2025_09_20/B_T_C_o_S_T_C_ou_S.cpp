/*
  author: SiAn20
  Name: Sidney Angelly Sahonero Garrado
*/
#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define endl '\n'

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
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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