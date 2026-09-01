#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k, suma=0, eliminar=0;
    cin >> n >> k;
    vector<int> a(n);
    
    for (int i=0; i<n; i++){
        cin >> a[i];
        suma += a[i];
    }
    for (int i=0; i<n; i++){
        if((suma-a[i])%k == 0){
            eliminar++;
        }
    }
    cout << eliminar << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

//by Sidney Angelly Sahonero Garrado