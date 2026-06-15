#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    set<char> confundibles = {'l', 'I', 'O', '0', 'B','8'};

    for (int i = 0; i < s.size(); i++) {
        if(confundibles.count(s[i]) > 0) {
            cout << "SI" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

//by Sidney Angelly Sahonero Garrado