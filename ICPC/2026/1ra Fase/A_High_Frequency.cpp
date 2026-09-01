/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: https://codeforces.com/gym/106679/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vs = vector<string>;
#define fore(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  ll n, q, ct = 0, vt = 0, opU, opD;
  cin >> n;
  vs niv(n + 1);

  fore(i, 1, n + 1) {
    ll c, v;
    cin >> c >> v;
    ct += c;
    vt += v;
    opU = ct - vt;
    opD = ct + vt;
    if (opU > 0 && opD > 0)
      niv[i] = "COMPRA";
    else if (opU == 0 || opD == 0)
      niv[i] = "NEUTRO";
    else
      niv[i] = "VENDA";
  }

  cin >> q;
  while (q--) {
    ll x;
    cin >> x;
    cout << niv[x] << "\n";
  }
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