#include <iostream>
#include <chrono>  // Para medir tempo
#include <iomanip> // Para controle de formato de saída

// Função recursiva que calcula o fatorial de um número
int fatorial(int n) {
    // Marca o tempo antes de cada chamada recursiva
    auto inicio = std::chrono::high_resolution_clock::now();

    // Caso base da recursão
    if (n <= 1) {
        auto fim = std::chrono::high_resolution_clock::now();
        auto duracao = std::chrono::duration_cast<std::chrono::duration<double>>(fim - inicio);
        std::cout << "Fatorial(1) - Tempo de execução: " << std::fixed << std::setprecision(5) << duracao.count() << " segundos" << std::endl;
        return 1;
    }

    // Chamada recursiva
    int resultado = n * fatorial(n - 1);

    // Marca o tempo após cada chamada recursiva
    auto fim = std::chrono::high_resolution_clock::now();
    auto duracao = std::chrono::duration_cast<std::chrono::duration<double>>(fim - inicio);
    std::cout << "Fatorial(" << n << ") - Tempo de execução: " << std::fixed << std::setprecision(5) << duracao.count() << " segundos" << std::endl;

    return resultado;
}

int main() {
    int numero = 0;
    std::cin >> numero;
    int resultado = fatorial(numero);
    std::cout << "Resultado do fatorial: " << resultado << std::endl;

    return 0;
}
