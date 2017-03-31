#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{
    char seguir='s';
    int opcion=0;
    int num1=0;
    int num2=0;
    int suma;
    int resta;
    float division;
    int producto;
    int factorialA;
    int factorialB;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%d)\n",num1);
        printf("2- Ingresar 2do operando (B=%d)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!, B!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("\n ¿Que opcion desea elegir?(1-9): ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("\nIngrese 1er operando: ");
                scanf("%d",&num1);
                funcion_pausa();
                break;
            case 2:
                printf("\nIngrese 2do operando: ");
                scanf("%d",&num2);
                funcion_pausa();
                break;
            case 3:
                suma = funcion_suma(num1,num2);
                printf("\nLa suma de %d + %d es = %d\n",num1,num2,suma);
                funcion_pausa();
                break;
            case 4:
                resta = funcion_resta(num1,num2);
                printf("\nLa resta de %d - %d es = %d \n",num1,num2,resta);
                funcion_pausa();
                break;
            case 5:
                division = funcion_dividir(num1, num2);
                if(num2==0)
                {
                    printf("\nImposible realizar division, no se puede dividir por 0\n");
                }
                else
                {
                    printf("\nLa division de %d / %d es = %.2f\n",num1,num2,division);
                }
                funcion_pausa();
                break;
            case 6:
                producto = funcion_multiplicar(num1, num2);
                printf("\nLa multiplicacion de %d * %d es = %d\n", num1, num2, producto);
                funcion_pausa();
                break;
            case 7:
                if(num1<13 && num1>-13)
                {
                    factorialA = funcion_factorial(num1);
                    printf("\nEl factorial de %d es = %d\n",num1, factorialA);
                }
                else
                {
                    printf("\nImposible calcular factorial de %d en esta calculadora, numero muy grande\n",num1);
                }
                if(num2<13 && num2>-13)
                {
                    factorialB = funcion_factorial(num2);
                    printf("\nEl factorial de %d es = %d\n", num2, factorialB);
                }
                else
                {
                    printf("\nImposible calcular factorial de %d en esta calculadora, numero muy grande\n", num2);
                }
                funcion_pausa();
                break;
            case 8:
                suma = funcion_suma(num1, num2);
                resta = funcion_resta(num1, num2);
                division = funcion_dividir(num1, num2);
                producto = funcion_multiplicar(num1, num2);
                printf("\nLa suma de %d + %d es = %d\n",num1,num2,suma);
                printf("\nLa resta de %d - %d es = %d \n",num1,num2,resta);
                if(num2==0)
                {
                    printf("\nImposible realizar division, no se puede dividir por 0\n");
                }
                else
                {
                    printf("\nLa division de %d / %d es = %.2f\n",num1,num2,division);
                }
                printf("\nLa multiplicacion de %d * %d es = %d\n", num1, num2, producto);
                if(num1<13 && num1>-13)
                {
                    factorialA = funcion_factorial(num1);
                    printf("\nEl factorial de %d es = %d\n",num1, factorialA);
                }
                else
                {
                    printf("\nImposible calcular factorial de %d en esta calculadora, numero muy grande\n",num1);
                }
                if(num2<13 && num2>-13)
                {
                    factorialB = funcion_factorial(num2);
                    printf("\nEl factorial de %d es = %d\n", num2, factorialB);
                }
                else
                {
                    printf("\nImposible calcular factorial de %d en esta calculadora, numero muy grande\n", num2);
                }
                funcion_pausa();
                break;
            case 9:
                seguir = 'n';
                system("pause");
                break;
            default:
                printf("\nOpcion no valida, elija una opcion entre 1 y 9\n");
                funcion_pausa();

        }


    }
    return 0;
}

