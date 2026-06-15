#include <bits/stdc++.h>
using namespace std;

void solve(){
    int pos=1, posMax, altura=0, alturaMax=0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] == '+'){
            altura++;
        }else{
            altura--;
        }
        if(altura > alturaMax){
            alturaMax = altura;
            posMax = pos;
        }
        pos++;
    }
    
    cout << posMax << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}

//by Sidney Angelly Sahonero Garrado