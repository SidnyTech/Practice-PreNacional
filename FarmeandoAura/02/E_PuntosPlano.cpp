/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using us = unordered_set<int>;
#define nl "\n"
#define sz(x) (int)(x).size()
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  int n;
  cin >> n;
  us sx, sy;
  while (n--) {
    int x, y;
    cin >> x >> y;
    sx.insert(x);
    sy.insert(y);
  }
  cout << sz(sx) + sz(sy) << nl;
}

int main() {
  FAST_IO;

  int t;
  cin >> t;
  while (t--) solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/