#include <stdlib.h>
#include "listas.h"

int even(int nro) {
  return nro % 2 == 0;
}

int odd(int nro) {
  return nro % 2 == 1;
}

void quedarmeCon(int numeros[],int (*unCriterio)(int)){
  int* resultados;
  int largoResultado;
  largoResultado = filter(numeros, &resultados, unCriterio);
  imprimirLista(resultados,largoResultado,"impares");
  free(resultados);
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    quedarmeCon(numeros,&even);
    quedarmeCon(numeros,&odd);
    return 0;
}