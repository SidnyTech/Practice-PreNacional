// Sidney Angelly Sahonero Garrado
#include <bits/stdc++.h>
using namespace std;
#define N '\n'

void solve() {
  int n, l, limit = 0;
  string result = "";
  char c;
  cin >> n;
  while (n--) {
    cin >> c >> l;
    limit += l;
    if (limit > 100) {
      cout << "Too Long" << N;
      return;
    }
    while (l--) {
      result += c;
    }
  }
  cout << result << N;
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