/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll Pp, Pb, A, ans = 0;
  cin >> Pp >> Pb >> A;

  for (int i = 0; i <= A; ++i) {
    ll auxi = (Pp * i) * (Pb * (A - i));
    ans = max(ans, auxi);
  }
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/