#include <stdio.h>
#include <stdlib.h>
#define n 100

//globales, esto no se hace
int stack[n];
int top = -1;

void display() {
  system("clear");
  if (top >= 0) {
    for (int i = 0; i <= top; i++)
      printf("%d ", stack[i]);
    printf("\n");
  }
  else printf("El stack esta vacio\n");
}

void pop() {
  system("clear");
  if (top <= -1) printf("El stack esta por debajo del minimo\n");
  else {
    printf("El elemento borrado es: %d\n", stack[top]);
    top--;
  }
}

void push() {
  system("clear");
  if (top >= n-1) printf("El stack esta lleno\n");
  else {
    int val;
    printf("Ingresa un numero para agregar\n");
    scanf("%d", &val);
    top++;
    stack[top] = val;
  }
}

int main(int argc, char *argv[]) {
  while (1) {
    int choice;
    printf("Selecciona una opcion\n");
    printf("1)Agregar un numero\n");
    printf("2)Sacar un numero\n");
    printf("3)Ver el stack\n");
    printf("4)Salir\n");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        printf("Saliendo\n");
        return 0;
    }
  }
  return 0;
}
