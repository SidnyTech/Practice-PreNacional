#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    long long x, y, countHorizontal=0, countVertigal=0;
    set<char> vertical = {'A', 'H' , 'M' , 'T' , 'U' , 'V' , 'W' , 'Y'};
    set<char> horizontal = {'B', 'C' , 'D' , 'E' , 'H' , 'K'};
    string ver, hor, igual;
    ver = "Más simetría vertical.";
    hor = "Más simetría horizontal.";
    igual = "Simetría igual.";
    cin >> x >> y;
    
    for(int i=x; i<y+1; i++){
        if(vertical.count(s[i])>0){
            countVertigal++;
        } if(horizontal.count(s[i])>0){
            countHorizontal++;
        }
    }
    if(countVertigal > countHorizontal){
        cout << ver << endl;
    }else if(countVertigal < countHorizontal){
        cout << hor << endl;
    } else{
        cout << igual << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    string s;
    cin >> s >> t;
    while(t--) solve(s);
}
