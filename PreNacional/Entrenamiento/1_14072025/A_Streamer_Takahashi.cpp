// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

void solve() {
  int N, L, R, X, Y, oyentes = 0;
  cin >> N >> L >> R;

  while (N--) {
    cin >> X >> Y;
    if ((X < L || X == L) && (Y > R || Y == R)) {
      oyentes++;
    }
  }
  cout << oyentes;
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