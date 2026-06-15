#include <bits/stdc++.h>
using namespace std;

void solve(){
    double p, p1,p2,p3,f,promedio;
    cin >> p >> p1 >> p2 >> p3 >> f;

    promedio = p1 + p2 + p3;
    promedio -= min({p1,p2,p3});

    if(((p*0.15) + ((promedio/2)*0.45) + (f*0.40)) > 50){
        cout << "Si" << endl;
    }else {
        cout << "No" << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
}

//by Sidney Angelly Sahonero Garrado