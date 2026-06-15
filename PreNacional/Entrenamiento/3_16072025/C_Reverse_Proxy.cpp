// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, q, x, caja[1001]={};
  cin >> n >> q;

  while (q--) {
    cin >> x;
    if (x) {
      caja[x]++;
      cout << x << " ";
    } else {
      int valMin = 101, idMin = 0;
      for (int i = 1; i <= n; i++) {
        if (caja[i] < valMin) {
          valMin = caja[i];
          idMin = i;
        }
      }
      caja[idMin]++;
      cout << idMin << " ";
    }
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