#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int NUM_PALOS = 4; // Tréboles, Corazones, Picas, Diamantes
const int NUM_CARTAS_POR_PALO = 13;
const int TOTAL_CARTAS = NUM_PALOS * NUM_CARTAS_POR_PALO * 2; // Dos barajas

vector<int> inicializarBaraja() {
    vector<int> baraja(TOTAL_CARTAS, 0);
    return baraja;
}

void retirarCarta(vector<int>& baraja, int carta) {
    baraja[carta] = 1;
}

int convertirCartaAIndice(int valor, int palo) {
    return valor + (palo * NUM_CARTAS_POR_PALO);
}

double calcularProbabilidad(const vector<int>& baraja, int carta1, int carta2) {
    int rangoInicio = min(carta1, carta2);
    int rangoFin = max(carta1, carta2);
    int contador = 0;

    for (int i = rangoInicio + 1; i < rangoFin; ++i) {
        if (baraja[i] == 0) {
            contador++;
        }
    }

    int totalPosibilidades = rangoFin - rangoInicio - 1;
    return totalPosibilidades > 0 ? static_cast<double>(contador) / totalPosibilidades : 0;
}

bool quedanCartas(const vector<int>& baraja) {
    return find(baraja.begin(), baraja.end(), 0) != baraja.end();
}

int main() {
    vector<int> baraja = inicializarBaraja();

    while (quedanCartas(baraja)) {
        int valor1, palo1, valor2, palo2;
        char decision;

        cout << "Crupier saca dos cartas. Ingresa el valor y el palo de las dos cartas (0-12 para valor, 0-3 para palo):\n";
        cout << "Carta 1 - Valor: ";
        cin >> valor1;
        cout << "Carta 1 - Palo: ";
        cin >> palo1;
        cout << "Carta 2 - Valor: ";
        cin >> valor2;
        cout << "Carta 2 - Palo: ";
        cin >> palo2;

        int carta1 = convertirCartaAIndice(valor1, palo1);
        int carta2 = convertirCartaAIndice(valor2, palo2);

        retirarCarta(baraja, carta1);
        retirarCarta(baraja, carta2);

        cout << "¿Deseas apostar? (s/n): ";
        cin >> decision;

        if (decision == 's' || decision == 'S') {
            double probabilidad = calcularProbabilidad(baraja, carta1, carta2);
            cout << "La probabilidad de ganar es: " << probabilidad * 100 << "%\n";
        } else {
            cout << "El jugador decidió no apostar.\n";
        }
    }

    cout << "No quedan más cartas en la baraja. Fin del juego.\n";

    return 0;
}
