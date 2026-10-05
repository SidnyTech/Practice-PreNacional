/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  string a, s;
  cin >> a >> s;

  sort(all(s));
  int j = 0, n = sz(a), m = sz(s);
  forn(i, n) {
    if (j < m && a[i] < s[j]) {
      a[i] = s[j];
      ++j;
    }
  }
  cout << a << "\n";
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