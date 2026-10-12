/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n;
  cin >> n;
  int ans = 0, sumC = 0, sumD1 = 0, sumD2 = 0, cent = 0;

  forn(i, n) {
    forn(j, n) {
      int x;
      cin >> x;
      if (i == n / 2 && j == n / 2)
        cent = x;
      else if ((i == n / 2) || (j == n / 2) || (i == j) || (i + j == (n - 1)))
        ans += x;
    }
  }

  cout << ans + cent << endl;
}

int main() {
  FAST_IO;

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/