// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  string S, T;
  cin >> S >> T;

  // comparamos que sea mayuscula y el ant no este en t
  for (int i = 1; i < S.size(); i++) {
    if (isupper(S[i]) && T.find(S[i - 1]) == string::npos) {
      cout << "No" << endl;
      return;
    }
  }
  cout << "Yes" << endl;
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