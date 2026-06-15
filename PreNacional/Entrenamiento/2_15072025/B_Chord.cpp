// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  string s;
  set<string> cadenas = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  cin >> s;
  if (cadenas.count(s) == 0) {
    cout << "No" << endl;
    return;
  } else {
    cout << "Yes" << endl;
  }
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