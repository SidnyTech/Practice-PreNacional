/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vc vector<char>
#define all(x) begin(x), end(x)

void solve() {
  string s;
  cin >> s;

  int cnt = 0;
  bool letter = false;

  vi dig;
  vc letters;

  for (char c : s) {
    if (isdigit(c)) {
      dig.push_back(c - '0');
      if (letter) {
        cout << "N\n";
        return;
      }
    } else {
      letters.push_back(c);
      letter = true;
    }
    cnt++;
  }

  if (!dig.empty() && !letters.empty()) {
    if (cnt > 10 && is_sorted(all(dig)) && is_sorted(all(letters))) {
      cout << "S\n";
    } else {
      cout << "N\n";
    }
  } else {
    cout << "N\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) solve();
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/