/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using u32 = unsigned int;
#define vu32 vector<u32>

void solve() {
  string mode;
  cin >> mode;

  if (mode == "compress") {
    int n, m;
    cin >> n >> m;
    int total = n * m;
    vu32 pixels(total), rle;
    for (int i = 0; i < total; i++) {
      string hex;
      cin >> hex;
      pixels[i] = (u32)stoul(hex, nullptr, 16);
    }

    int i = 0;
    while (i < total) {
      int j = i;
      while (j < total && pixels[j] == pixels[i]) j++;
      rle.push_back(pixels[i]);
      rle.push_back((u32)(j - i));
      i = j;
    }
    if ((int)rle.size() + 1 < total + 1) {
      cout << (rle.size() + 1) << "\n";
      cout << 1;
      for (u32 v : rle) cout << " " << v;
      cout << "\n";
    } else {
      cout << (total + 1) << "\n";
      cout << 0;
      for (u32 v : pixels) cout << " " << v;
      cout << "\n";
    }

  } else {
    int n, m, k;
    cin >> n >> m >> k;
    vu32 vals(k), pixels;
    for (auto &v : vals) cin >> v;

    int total = n * m;
    pixels.reserve(total);

    u32 flag = vals[0];
    if (flag == 0) {
      for (int i = 1; i < k; i++) pixels.push_back(vals[i]);
    } else {
      for (int i = 1; i < k; i += 2) {
        u32 color = vals[i];
        u32 count = vals[i + 1];
        for (u32 c = 0; c < count; c++) pixels.push_back(color);
      }
    }

    for (int r = 0; r < n; r++) {
      for (int c = 0; c < m; c++) {
        printf("%08X", pixels[r * m + c]);
        if (c + 1 < m) printf(" ");
      }
      printf("\n");
    }
  }
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