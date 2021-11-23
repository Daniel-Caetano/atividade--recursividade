// Autor Daniel Caetano de Souza Ferreira
// Data: 23/11/2021
// Atividade de recursividade

#include <math.h>
#include <stdio.h>
#include <windows.h>

int potencia(base, expoente) {

  if (expoente == 1) {
    return base;
  }
  expoente--;

  return potencia(base, expoente) * base;
}

int fatorial(int numero) {
  if (numero == 1) {
    return numero;
  }

  return fatorial(numero - 1) * numero;
}

int main() {
  int base;
  int expoente;
  int resultadoPotencia;
  int resultadoFatorial;
  int numero;

  printf("\nDigite a base para potencia!\n");
  scanf(" %d", &base);
  printf("\nDigite o expoente para potencia!\n");
  scanf(" %d", &expoente);

  resultadoPotencia = potencia(base, expoente);
  printf("\nResultado Potencia:(%d^%d)=|%d|", base, expoente,
         resultadoPotencia);

  printf("\nDigite o numero fatorial!\n");
  scanf(" %d", &numero);

  resultadoFatorial = fatorial(numero);
  printf("\nResultado: |%d|fatorial=|%d|", numero, resultadoFatorial);

  printf("\n\n");
  system("pause");
}