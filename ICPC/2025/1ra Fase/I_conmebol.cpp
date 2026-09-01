#include <bits/stdc++.h>
using namespace std;

int n, a;
string s;
stack<pair<string, int>> pila1, pila2;
pair<string, int> aux1, aux2, result1, result2;

void vaciar_pila(stack<pair<string, int>> &p1, stack<pair<string, int>> &p2){
    while(!p1.empty()){
        aux1 = p1.top();
        p1.pop();
        if (p1.empty()) {
            p2.push(aux1);
            break;
        }
        aux2 = p1.top();
        p1.pop();
        if((aux2.second > aux1.second) || ((aux2.second == aux1.second)&&(aux2.first<aux1.first))){
            p2.push(make_pair(aux2.first, aux2.second-aux1.second));
        }else{
            p2.push(make_pair(aux1.first, aux1.second-aux2.second));
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s >> a;
        pila1.push(make_pair(s, a));
    }

    while (!(pila1.size() == 2 || pila2.size() == 2)) {
        if (pila1.empty()) {
            vaciar_pila(pila2, pila1);
        } else {
            vaciar_pila(pila1, pila2);
        }
    }

    if(pila1.size()==0){
        result1 = pila2.top();
        pila2.pop();
        result2 = pila2.top();
        pila2.pop();
    }else{
        result2 = pila1.top();
        pila1.pop();
        result1 = pila1.top();
        pila1.pop();
    }

    if((result2.second == result1.second)&&(result2.first<result1.first)){
        result1.swap(result2);
    }

    cout << result1.first << endl << result2.first << endl;

    return 0;
}

//by Sidney Angelly Sahonero Garrado