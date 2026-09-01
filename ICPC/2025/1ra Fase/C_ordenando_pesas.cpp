#include <bits/stdc++.h>
using namespace std;

signed main(){
    int n;
    cin >> n;
    string res = "SI";
    for(int i=0; i<1; i++){
        vector<int> v;
        for(int i=0; i<n*2; i++){
            int n;
            cin >> n;
            v.push_back(n);
        }
        for(int i=0; i<n*2-1; i = i+2){
            
            if(v[i] != v[i+1]){
                res = "NO";
                break;
            }
        }
    }
    cout << res << endl;
}

//by Sidney Angelly Sahonero Garrado