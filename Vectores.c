#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(int argc, char const *argv[])
{
    int tamaño;
    int columnas;
    int Macas[columnas];
    int minimo = 1;
    int maximo = 100;
    printf("Ingrese el numero de columnas:");
    scanf("%d", &tamaño);

    if (tamaño <= 0 || tamaño > MAX)
    {
        printf("El numero ingresado para el vector es incorrecto, debeseser mayor a 0 y menor que 100");
        return 1;
    }

    columnas = tamaño;

    for (int i = 0; i < columnas; i++)
    {
        int numero_aleatorio = minimo + rand() % (maximo - minimo + 1);
        Macas[columnas+i] = numero_aleatorio;
    }

    printf("Impresion de matriz\n");
    for (int i = 0; i < columnas; i++)
    {

        printf(" %3d ", Macas[columnas+i]);
    }

    return 0;
}