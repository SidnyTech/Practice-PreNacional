// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

void solve() {
  int N, A, B, day = 0;
  cin >> N;
  while (N--) {
    cin >> A >> B;
    if (B > A) {
      day++;
    }
  }
  cout << day << endl;
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