/*Factorial de un número
Descripción: Calcular el factorial de un número.
Ejemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "Ingrese numero", cada que se la llame a algoritmo*/
void precentar (){
    printf("ingrese número: ");
}
//funcion factorial
int factorial (int n){
    int i=1, mul=1;
/*el bucle esta condicionado para que mientas i sea menor o igual a n , ebucle sera verdadero
si la condicion es falsa el bucle finalizara*/
while(i<=n){
/*el bucle imprime en pantalla el valor de i, es decir iprimira numeros naturales hasta n*/
        printf("%d ",i);
/*if , es un comando que mientras ui sea menor que n, imprimira en pantalla "*", como simbolo
de que la serie se esta multiplicando */
        if (i<n){
            printf("* ");
        }
/*la variable mul actualizara la multiplicacion de el valor que almacena mul por los numeros 
naturales que arroja la serie*/
        mul*=i;
        i++;
    }
//imprime en pantalla la variable mul
    printf("= %d", mul);
    return mul;

}
int main (){
    int n;
    printf("Factorial de un numero\n");
    precentar();
    scanf("%d", &n);
    printf("!%d = ", n);
    factorial(n);
    return 0;
}