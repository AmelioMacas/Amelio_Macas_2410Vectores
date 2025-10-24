#include <stdio.h>
#define MAX 100
int main(int argc, char const *argv[])
{
    int tamaño;
    int columnas;
    int Macas[columnas];

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
        Macas[columnas] = 0;
    }

    printf("Impresion de matriz\n");
    for (int i = 0; i < columnas; i++)
    {
        printf(" %3d ", Macas[columnas]);
    }

    return 0;
}