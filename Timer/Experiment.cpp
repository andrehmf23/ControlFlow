#include <iostream>

using namespace std;

//Fibonacci Interativo
long FibInt(int n){

    long frente = 1; // Termo 1
    long tras = 0; // Termo 2
    long atual = n;

    for (size_t i = 2; i <= n; i++)
    {
        atual = tras + frente;
        tras = frente;
        frente = atual;
    }

    return atual;
}

//Fibonacci Recursivo
long FibRec(int n){
    if (n <= 1) return n;
    return FibRec(n-1) + FibRec(n-2);
}