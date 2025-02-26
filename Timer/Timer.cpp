#include <iostream>
#include <chrono>
#include <iomanip>
#include <thread>
#include <atomic>

#include "Experiment.cpp"

using namespace std;

// Variável global atômica para controlar o timer
atomic<bool> timerRodando(true);

// Função do timer (roda em uma thread separada)
void Timer() {
    auto inicio = chrono::high_resolution_clock::now();
    while (timerRodando) {
        auto agora = chrono::high_resolution_clock::now();
        chrono::duration<double> tempoDecorrido = agora - inicio;
        cout << "\rTempo: " << fixed << setprecision(4) << tempoDecorrido.count() << "s" << flush;
        this_thread::sleep_for(chrono::milliseconds(100)); // Atualiza a cada 100ms
    }
}

int main() {
    cout << "Digite o valor de entrada: ";
    int entry;
    cin >> entry;

    // Inicia o timer em uma thread separada
    thread timerThread(Timer);

    // Calcula Fibonacci
    int resultado = FibRec(entry);

    // Para o timer e espera a thread encerrar
    timerRodando = false;
    timerThread.join();

    cout << "\nResultado do FibRec(" << entry << "): " << resultado << endl;

    return 0;
}
