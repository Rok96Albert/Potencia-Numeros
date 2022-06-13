#include <stdio.h>

//Declaración de funciones

int CalculaPotencia(int x,int y);


int main() {

    int x_base;
    int y_exponente;

    printf("Se solicita el numero de base:");
    scanf("%i",&x_base);

    printf("\nIndique la potencia a la que se quiera elevar el numero:");

    scanf("%i",&y_exponente);

    int resultado = CalculaPotencia(x_base,y_exponente);

    printf("\nEl resultado es: %i",resultado);

    return 0;
}

int CalculaPotencia(int x,int y)
{
    int producto;

    int temp = x;

    for(int i = 0; i < y; i++)
    {
        if(i != 0)
        {
            x = x * temp;
            producto = x;
        }
        else
        {
            x = x * 1;
            producto = x;
        }
    }


    return producto;
}

