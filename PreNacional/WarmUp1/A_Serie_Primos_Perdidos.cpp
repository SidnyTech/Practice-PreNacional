#include <bits/stdc++.h>
using namespace std;
#define int long long

int const max_value = 1e5;
vector<int> criba(max_value);
vector<int> primos;

void init_criba(){
    for (int i=0; i<max_value; i++){
        criba[i]=i;
    }
    for (int i=2; i<max_value; i++){
        if (criba[i]==i){
            primos.push_back(i);
            for (int j=i*i; j<max_value; j+=i){
                criba[j] = i;
            }
        }
        
    }
}

void solve(){
    int k, auxi;
    cin >> k;
    auxi = k%5;
    if (auxi == 2){
        k += 2;
    }else if (auxi == 4){
        k += 1;
    }else if (auxi == 0){
        k -= 3;
    }
    cout << primos[k-1] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    init_criba();
    int t;
    cin >> t;
    while (t--) solve();
}

//by Sidney Angelly Sahonero Garrado