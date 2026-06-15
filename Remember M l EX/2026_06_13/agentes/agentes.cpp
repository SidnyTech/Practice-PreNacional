/*
  author: Sian01
  name: Sidney A. Sahonero
*/
#include <bits/stdc++.h>
#include "agentes.h"
using namespace std;

map<int, string> id_name;

vector<int> encode(vector<string> agents) {
    vector<int> result;
    for(int i = 0; i < (int)agents.size(); i++){
        int id = (i * 1000) + i; 
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        int d = (a + b) % 10;
        int e = (b + c) % 10; 
        int f = (a + c) % 10; 
        id = a*100000 + b*10000 + c*1000 + d*100 + e*10 + f;
        id_name[id] = agents[i];
        result.push_back(id);
    }
    return result;
}

string decode(vector<string> agents, int id) {
    if(id_name.count(id)) return id_name[id];
    
    for(int pos = 0; pos < 6; pos++){
        int factor = 1;
        for(int p = 0; p < pos; p++) factor *= 10;
        
        int digit_actual = (id / factor) % 10;
        
        for(int d = 0; d <= 9; d++){
            if(d == digit_actual) continue;
            int new_id = id - digit_actual * factor + d * factor;
            if(id_name.count(new_id)){
                return id_name[new_id];
            }
        }
    }
    return ""; 
}

/*
     /\_/\
    ( o.o )
     > ^ <
*/