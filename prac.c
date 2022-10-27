// Escribir un programa que reciba un argumento entero e imprima el mes del año correspondiente o un error si el argumento es menor a 1 o mayor a 12.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int num = atoi(argv[1]);
char *mes[12] = {
  "Enero",
  "Febrero",
  "Marzo",
  "Abril",
  "Mayo",
  "Junio",
  "Julio",
  "Agosto",
  "Septiembre",
  "Octubre",
  "Noviembre",
  "Diciembre"
};
for (int i = 0; i > 12; i++) {
}
  return 0;
}
