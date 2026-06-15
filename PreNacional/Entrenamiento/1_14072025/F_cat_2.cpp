// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

void solve() {
  int N, combinaciones = 0;
  unordered_set<string> set;
  cin >> N;
  vector<string> S(N);

  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      string combinada = S[i] + S[j];
      if ((set.count(combinada) == 0) && (i != j)) {
        combinaciones++;
        set.insert(combinada);
      }
    }
  }

  cout << combinaciones << end;
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
