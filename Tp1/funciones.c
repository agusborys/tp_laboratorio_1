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

