/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>

ll n, k;
vll a, b, c;

ll surface(int i, int j, int l) {
  return 2LL * (a[i] * b[j] + b[j] * c[l] + c[l] * a[i]);
}

struct Item {
  ll surf;
  int i, j, l;
};

struct Compare {
  bool operator()(const Item &x, const Item &y) const {
    if (x.surf != y.surf) return x.surf < y.surf;
    if (x.i != y.i) return x.i < y.i;
    if (x.j != y.j) return x.j < y.j;
    return x.l < y.l;
  }
};

void solve() {
  cin >> n >> k;
  a.resize(n);
  b.resize(n);
  c.resize(n);

  for (auto &x : a) cin >> x;
  for (auto &x : b) cin >> x;
  for (auto &x : c) cin >> x;

  priority_queue<Item, vector<Item>, Compare> heap;
  set<tuple<int, int, int>> visited;

  int si = n - 1, sj = n - 1, sl = n - 1;
  heap.push({ surface(si, sj, sl), si, sj, sl });
  visited.insert({ si, sj, sl });

  Item ans{};
  for (ll cnt = 1; cnt <= k; cnt++) {
    ans = heap.top();
    heap.pop();

    int i = ans.i, j = ans.j, l = ans.l;

    if (i - 1 >= 0 && !visited.count({ i - 1, j, l })) {
      visited.insert({ i - 1, j, l });
      heap.push({ surface(i - 1, j, l), i - 1, j, l });
    }
    if (j - 1 >= 0 && !visited.count({ i, j - 1, l })) {
      visited.insert({ i, j - 1, l });
      heap.push({ surface(i, j - 1, l), i, j - 1, l });
    }
    if (l - 1 >= 0 && !visited.count({ i, j, l - 1 })) {
      visited.insert({ i, j, l - 1 });
      heap.push({ surface(i, j, l - 1), i, j, l - 1 });
    }
  }

  cout << (ans.i + 1) << " " << (ans.j + 1) << " " << (ans.l + 1) << "\n";
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