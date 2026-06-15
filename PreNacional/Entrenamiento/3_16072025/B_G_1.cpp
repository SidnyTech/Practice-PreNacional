// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int n, k, races = 0;
  cin >> n;
  vector<int> a(n);

  for (int &x : a) {
    cin >> x;
  }
  cin >> k;
  for (int i = 0; i < n; i++) {
    if (k <= a[i]) {
      races++;
    }
  }
  cout << races << endl;
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