#include <stdio.h>
#include <stdlib.h>
#include "Nombres.h"


int main()
{
    /*
    *Inicializacion de variables..
    fuenteUno y fuenteDos son los numeros que se ingresan en la calculadora
    Los verificadores funcionan como banderas para poder invalidar datos erroneos como dividir por 0
    Las demas variables tienen el nombre de las distintas funciones de la calculadora para llamar cada resultado
    */

    int fuenteUno=0;
    int fuenteDos=0;
    int opcion;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    long long int factorial;
    long long int factorialfuenteDos;
    int verificadorUno=0;
    int verificadorDos=0;
    int casoTres=0;


    printf("\n Calculadora de enteros. Ingrese una de las siguientes opciones: \n");
    system ("pause");

    do
    {
        //El menu de la calculadora indicando que hace cada opcion

        printf("\n (1).- Ingresar la primer fuente= %d \n", fuenteUno);
        printf("\n (2).- Ingresar la segunda fuente= %d \n", fuenteDos);
        printf("\n (3).- Calcular todas las operaciones) \n");
        printf("\n Sumar (A+B) \n");
        printf("\n Restar (A-B) \n");
        printf("\n Multiplicación (A * B) \n");
        printf("\n División (A / B) \n");
        printf("\n Factorial de A y B (!N) \n");
        printf("\n (4).- Mostrar resultados: ");
        printf("\n (5).- Salir de la calculadora.- \n");

        opcion=askOpcion();

        //Lo siguiente, usando switch es la codificacion del menu de opciones con sus respectivas funciones

        switch(opcion)
        {
        case 1:
            askNumero(&fuenteUno);
            verificadorUno++;
            break;
        case 2:
            askNumero(&fuenteDos);
            verificadorDos++;
            break;
        case 3:
            if (verificadorUno == 0 || verificadorDos == 0)
            {
                printf("Error. Ingrese numeros validos.");
            }
            else
            {

                //Sumar
                suma=sumar(fuenteUno, fuenteDos);
                //Restar
                resta=restar(fuenteUno, fuenteDos);
                //Multiplicacion
                multiplicacion=multiplicar(fuenteUno, fuenteDos);
                //Division
                division=dividir(fuenteUno, fuenteDos);
                //Factorial
                factorial=factoreoUno(fuenteUno);
                factorialfuenteDos=factoreoDos(fuenteDos);
                casoTres++;


                printf("\n Calculando resultados...\n");
            }
            break;
        case 4:

            if (verificadorUno == 0 || verificadorDos == 0 || casoTres==0)
            {
                printf("Error. No ha ingresado la opcion 3 o no ha ingresado los datos");
            }
            else
            {
                printf("\n El resultado de %d + %d es: %d \n",fuenteUno, fuenteDos, suma);
                printf("\n El resultado de %d - %d es: %d \n",fuenteUno, fuenteDos, resta);
                printf("\n El resultado de %d * %d es: %d \n",fuenteUno, fuenteDos, multiplicacion);

                if (fuenteUno==0 || fuenteDos==0)
                {
                    printf("\n Error. No se puede dividir por 0. Ingrese datos validos.\n");
                }
                else
                {
                    printf("\n El resultado de %d / %d es: %.2f \n",fuenteUno, fuenteDos, division);
                }
                if (fuenteUno < 0)
                {
                    printf("\n No se puede sacar el factorial de un numero negativo\n");
                }
                else
                {
                    printf("\n El resultado del factorial de %d es: %lld \n", fuenteUno, factorial);
                    if (fuenteDos < 0)
                    {
                        printf("\n No se puede sacar el factorial de un numero negativo\n");
                    }
                    else
                    {
                        printf("\n El resultado del factorial de %d es: %lld \n", fuenteDos, factorialfuenteDos);
                    }

                }


            }
            break;
        case 5:
            printf("Hasta luego...");
            break;
        default:
            printf("\n Error. Ingrese una opcion valida del 1 al 4 y 5 para salir. \n");
        }

        system("pause");
        system("cls");
    }
    while (opcion != 5);



    return 0;
}
