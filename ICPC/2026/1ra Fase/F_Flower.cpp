/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/gym/106679/problem/F
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

constexpr int MAXN = 1e6 + 5;

void solve() {
  int n;
  cin >> n;

  ll ans, p = 1;
  while (p * 3 <= n) p *= 3;

  if (n < 2 * p)
    ans = n + p;
  else
    ans = (3 * n) - (p * 3);

  cout << ans << "\n";
}

int main() {
  FAST_IO;

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
     1 2 3 6 9 18 27 
*/