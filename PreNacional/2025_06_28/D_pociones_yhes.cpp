#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> explosivas;
    // Leer combinaciones explosivas y convertirlas en bitmasks
    for (int i = 0; i < M; ++i) {
        int K;
        cin >> K;
        int mask = 0;
        for (int j = 0; j < K; ++j) {
            int e;
            cin >> e;
            mask |= (1 << (e - 1));
        }
        explosivas.push_back(mask);
    }
    int totalValidas = 0;
    // Recorrer todos los subconjuntos posibles (desde 0 hasta 2^N - 1)
    for (int s = 0; s < (1 << N); ++s) {
        bool esValido = true;
        for (int maskExplosiva : explosivas) {
            // Si el subconjunto incluye todos los elementos de una explosiva => inválido
            if ((s & maskExplosiva) == maskExplosiva) {
                esValido = false;
                break;
            }
        }
        if (esValido) {
            totalValidas++;
        }
    }
    cout << totalValidas << endl;
    return 0;
}

//by Sidney Angelly Sahonero Garrado