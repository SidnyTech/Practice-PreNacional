/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define sz(x) (int)(x).size()

void solve() {
  int N, P, K, ans, x;
  cin >> N >> P >> K;

  x = ((P + 1) <= N) ? P + 1 : 1;
  vi circle;

  for (int i = 0; i < N - 1; i++) {
    circle.push_back(x);
    x = (x + 1) <= N ? x + 1 : 1;
  }

  ans = K % sz(circle);
  cout << circle[ans] << "\n";
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