// Pograma en el que tenes que ingresar palabras que esten en la lista, si es correcto imprime algo, y si no lo es, imprime error

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

char *word = argv[1];

char *a[3] = {
  "Elpepe",
  "patos",
  "samaniego"
};

if (*word == **a) {
  printf("Felicidades, es correcto.\n");
} else if (*word != **a) {
  printf("Error, vola de aca\n");
}
return 0;
}
