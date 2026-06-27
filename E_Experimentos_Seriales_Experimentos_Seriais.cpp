/*
  author: Sian01
  name: Sidney A. Sahonero
  problem link: 
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define vi vector<int>
#define vll vector<ll>
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
const ll INF = 4e18;
const int MOD = 1e9 + 7;

int n;
vi fixedVal;
vector<bool> isFixed;

int rulerVal(ll idx1based) {
  int v = 0;
  ll x = idx1based;
  while (x % 2 == 0) {
    v++;
    x /= 2;
  }
  return v;
}

vi buildArr(int shift) {
  vi arr(n);
  for (int i = 0; i < n; i++)
    arr[i] = isFixed[i] ? fixedVal[i] : rulerVal((ll)(i + 1) + shift);
  return arr;
}

ll fFast(const vi& A) {
  int m = sz(A);
  vi last(m + 2, -1);
  ll total = 0;
  for (int r = 0; r < m; r++) {
    int x = A[r];
    if (x >= 0 && x <= m) last[x] = r;
    int curMin = r + 1, v = 0;
    while (v <= m && last[v] != -1) {
      curMin = min(curMin, last[v]);
      total += curMin + 1;
      v++;
    }
  }
  return total;
}

ll contribP(const vi& A, int p) {
  int m = sz(A);
  vi last(m + 2, -1);
  for (int i = 0; i < p; i++) {
    int x = A[i];
    if (x >= 0 && x <= m) last[x] = i;
  }
  ll total = 0;
  for (int r = p; r < m; r++) {
    int x = A[r];
    if (x >= 0 && x <= m) last[x] = r;
    int curMin = p, v = 0;
    while (v <= m && last[v] != -1) {
      curMin = min(curMin, last[v]);
      total += curMin + 1;
      v++;
    }
  }
  return total;
}

void solve() {
  cin >> n;
  fixedVal.assign(n, -1);
  isFixed.assign(n, false);
  for (int i = 0; i < n; i++) {
    cin >> fixedVal[i];
    isFixed[i] = (fixedVal[i] != -1);
  }

  int numShifts = 64;
  ll bestVal = -1;
  vi bestArr;

  for (int shift = 0; shift < numShifts; shift++) {
    vi arr = buildArr(shift);
    ll val = fFast(arr);
    if (val > bestVal) {
      bestVal = val;
      bestArr = arr;
    }
  }

  const int C = 6;
  for (int p = 0; p < n; p++) {
    if (isFixed[p]) continue;
    int old = bestArr[p];
    ll base = contribP(bestArr, p);
    int bestV = old;
    ll bestC = base;
    for (int v = 0; v < min(C, n + 1); v++) {
      if (v == old) continue;
      bestArr[p] = v;
      ll c = contribP(bestArr, p);
      if (c > bestC) {
        bestC = c;
        bestV = v;
      }
      bestArr[p] = old;
    }
    bestArr[p] = bestV;
  }

  for (int i = 0; i < n; i++) cout << bestArr[i] << " \n"[i + 1 == n];
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