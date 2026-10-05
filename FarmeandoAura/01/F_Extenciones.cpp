/*
  author: Sian01
  name: Sidney A. Sahonero
*/

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define pb push_back
#define sz(x) (int)(x).size()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define fore(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);

void solve() {
  string s;
  cin >> s;
  int n = sz(s);

  vi dots;
  forn(i, n) if (s[i] == '.') dots.pb(i);
  int k = sz(dots);

  if (k == 0) {
    cout << "NO\n";
    return;
  }

  int nameLen0 = dots[0];
  if (nameLen0 < 1 || nameLen0 > 8) {
    cout << "NO\n";
    return;
  }

  int extLenK = n - 1 - dots[k - 1];
  if (extLenK < 1 || extLenK > 3) {
    cout << "NO\n";
    return;
  }

  vi extLen(k), nameLen(k);
  nameLen[0] = nameLen0;
  extLen[k - 1] = extLenK;

  fore(i, 0, k - 1) {
    int L = dots[i + 1] - dots[i] - 1;
    int chosenA = -1;
    for (int a = 1; a <= 3; a++) {
      int b = L - a;
      if (b >= 1 && b <= 8) {
        chosenA = a;
        break;
      }
    }
    if (chosenA == -1) {
      cout << "NO\n";
      return;
    }
    extLen[i] = chosenA;
    nameLen[i + 1] = L - chosenA;
  }

  cout << "YES\n";
  int pos = 0;
  forn(i, k) {
    string name = s.substr(pos, nameLen[i]);
    pos += nameLen[i] + 1;
    string ext = s.substr(pos, extLen[i]);
    pos += extLen[i];
    cout << name << "." << ext << "\n";
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