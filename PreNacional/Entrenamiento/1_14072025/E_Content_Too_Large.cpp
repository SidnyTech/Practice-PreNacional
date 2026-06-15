// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define end '\n'

void solve() {
  int N, M, A, sum = 0;
  cin >> N >> M;
  while (N--) {
    cin >> A;
    sum += A;
    if (sum > M) {
      cout << "No" << end;
      return;
    }
  }
  cout << "Yes" << end;
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