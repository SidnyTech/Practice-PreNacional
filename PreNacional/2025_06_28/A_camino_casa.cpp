#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n_intersecciones, m_calles, k_esfuerzo_max;
    cin >> n_intersecciones >> m_calles >> k_esfuerzo_max;

    vector<vector<pair<int, int>>> grafo(n_intersecciones + 1);

    for (int i = 0; i < m_calles; i++) {
        int u, v, peso;
        cin >> u >> v >> peso;
        grafo[u].push_back({v, peso});
        grafo[v].push_back({u, peso});
    }

    vector<int> distancias(n_intersecciones + 1, INT_MAX);
    distancias[1] = 0;

    vector<bool> visitados(n_intersecciones + 1, false);

    for (int i = 1; i <= n_intersecciones; i++) {
        int u = -1;
        int distancia_minima = INT_MAX;

        for (int j = 1; j <= n_intersecciones; j++) {
            if (!visitados[j] && distancias[j] < distancia_minima) {
                distancia_minima = distancias[j];
                u = j;
            }
        }

        if (u == -1) break;
        visitados[u] = true;

        if (u == n_intersecciones) break;

        for (auto [v, peso] : grafo[u]) {
            if (!visitados[v] && distancias[u] + peso < distancias[v]) {
                distancias[v] = distancias[u] + peso;
            }
        }
    }

    if (distancias[n_intersecciones] <= k_esfuerzo_max) {
        cout << "SI\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

//by Sidney Angelly Sahonero Garrado