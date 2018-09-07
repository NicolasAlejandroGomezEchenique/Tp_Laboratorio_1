/*
*Funciones:
*En esta página estan codificados las funciones matematicas
que van a ser llamadas desde el main.c.-
*/
//Funcion para ingresar opciones.-
int askOpcion (void)
{
    int opcion;
    printf("\n Ingrese una opcion \n");
    scanf("%d", &opcion);
    return opcion;

}

//Funcion para pedir numeros.-

void askNumero (int* numero)
{
    printf("\n Ingrese un numero: \n");
    scanf("%d", numero);
}



//Funcion de suma
int sumar(int fuenteUno, int fuenteDos)
{

    int resultadoSuma;
    resultadoSuma= fuenteUno+fuenteDos;

    return resultadoSuma;
}
//Funcion de resta
int restar(int fuenteUno, int fuenteDos)
{

    int resultadoResta;
    resultadoResta=  fuenteUno-fuenteDos;

    return resultadoResta;
}
//Funcion de multiplicacion
int multiplicar(int fuenteUno, int fuenteDos)
{

    int resultadoMultiplicacion;
    resultadoMultiplicacion= fuenteUno*fuenteDos;

    return resultadoMultiplicacion;
}
//funcion de division
float dividir(int fuenteUno, int fuenteDos)
{

    float resultadoDivision;
    resultadoDivision= (float)fuenteUno/fuenteDos;

    return (float)resultadoDivision;
}
//funcion de factorial
long long int factoreoUno(int fuenteUno)
{

    long long int resultadoFactorial=1;
    int i;

    for (i=fuenteUno; i>=1; i-- )
    {

        resultadoFactorial=resultadoFactorial*i;
    }

    return resultadoFactorial;

}

long long int factoreoDos(int fuenteDos)

{

    long long int resultadoFactorialfuenteDos=1;
    int i;

    for (i=fuenteDos; i>=1; i-- )
    {

        resultadoFactorialfuenteDos=resultadoFactorialfuenteDos*i;
    }

    return resultadoFactorialfuenteDos;

    }


