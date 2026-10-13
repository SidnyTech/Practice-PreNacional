/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n;
  string s;
  cin >> n >> s;

  string a = s.substr(0, n), b = s.substr(n);
  sort(all(a));
  sort(all(b));

  bool menor = true, mayor = true;
  forn(i, n) {
    if (!(a[i] < b[i])) menor = false;
    if (!(a[i] > b[i])) mayor = false;
  }
  cout << (menor || mayor ? "YES" : "NO") << nl;
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