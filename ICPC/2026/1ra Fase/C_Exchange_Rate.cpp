/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/gym/106679/problem/C
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  ll t, c, k;
  cin >> t >> c >> k;

  cout << min(c, t * k) << "\n";
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