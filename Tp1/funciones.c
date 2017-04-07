#include"funciones.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/** \brief Solicita dos numeros enteros al usuario y los suma
 *
 * \param x primer operando
 * \param y segundo operando
 * \return la suma de los parametros
 *
 */
int funcion_suma(int x, int y)
{
    return x+y;
}

/** \brief Solicita dos numeros enteros al usuario y los resta
 *
 * \param x primer operando
 * \param y segundo operando
 * \return la resta de los parametros
 *
 */
int funcion_resta(int x, int y)
{
    return x-y;
}

/** \brief Solicita dos numeros enteros al usuario y los divide
 *
 * \param x dividendo
 * \param y divisor
 * \return cociente
 *
 */
float funcion_dividir(int x, int y)
 {
     if(y==0)
     {
         return 0;
     }
     else
     {
         return (float)x/y;
     }
 }

 /** \brief Solicita dos numeros enteros al usuario y los multiplica
  *
  * \param x primer operando
  * \param y segundo operando
  * \return multiplicacion de los parametros
  *
  */
 int funcion_multiplicar(int x, int y)
 {
     return x*y;
 }

/** \brief  solicita un numero entero y calcula el factorial de ese numero
 *
 * \param x numero entero
 * \return factorial del numero ingresado
 *
 */
int funcion_factorial(int x)
 {
     int factorial=1;
     int i;
     if (x==0)
     {
         return 1;
     }
        else
        {
            if(x>0)
            {
                for(i=1; i<=x; i++)
                {

                    factorial = factorial * i;

                }
                return factorial;
            }
            else
            {
                for(i=-1;i>=x;i--)
                {
                    factorial = factorial * i;
                }
                while(x%2==0)
                {
                    return -factorial;
                }
                return factorial;
            }
        }
 }


/** \brief Hace una pausa en el programa esperando que el usuario ingrese un caracter por teclado
 *
 *
 */
void funcion_pausa(void)
{
    printf("\nPulse tecla para volver al menu");
    getch();
}
/** \brief pide al usuario un texto para mostrar en pantalla e ingresar un numero
 *
 * \param numero a ingresar
 * \return numero ingresado por el usuario
 *
 */

int pedir_numero(char texto[])
{
    int numero;
    printf("%s",texto);
    scanf("%d",&numero);
    return numero;
}


/** \brief solicita dos numeros al usuario y valida que no se divida por 0
 *
 * \param numero a validar
 * \param numero a validar
 * \return devuelve 0 si el segundo parametro es 0, devuelve 1 si es diferente de 0
 *
 */
int validar_division(int x, int y)
{
	if(y==0)
    {
		return 0;
    }
    else
    {
    	return 1;
	}
}

/** \brief solicita al usuario un numero y valida que este dentro del rango para realizar el factorial
 *
 * \param numero entero
 * \return devuelve 0 si esta fuera del rango, devuelve 1 si esta dentro del rango
 *
 */
int validar_factorial(int x)
{
    if(x<13 && x>-13)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
