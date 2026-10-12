/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using um = unordered_map<int, int>;
#define nl "\n"
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n, m;
  cin >> n;
  vi a(n);
  forn(i, n) cin >> a[i];
  cin >> m;
  vi b(m);
  forn(i, m) cin >> b[i];

  int maxVal = 0;
  um freq;
  forn(i, n) {
    forn(j, m) {
      if (b[j] % a[i] == 0) {
        ++freq[b[j] / a[i]];
        maxVal = max(maxVal, b[j] / a[i]);
      }
    }
  }
  cout << freq[maxVal] << nl;
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