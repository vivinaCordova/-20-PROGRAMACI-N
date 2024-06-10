/*Serie de Fibonacci
Descripción: Presentar los n elementos de la serie de Fibonacci.
Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …*/
#include<stdio.h>
/*el proceso premite precentar en pantalla "Ingrese numero", cada que se la llame a algoritmo*/
void precenta(){
   printf("ingrese numero: ");
}
//funcion serie:
int serie (int n){
    int a=0, b=1,c;
    //imprime en pantalla los valores de a y b como inciacion 
    printf("%d %d ", a, b);
/*el bucle for condicionado para que mientras i igual a 2  sea menor de n ,el bucle continuara 
el bucle parte por dos debido a que si parte de uno la seie se imprimira (0 1 1 1 2), lo cual 
es incorrecto */
    for (int i = 2; i < n; i++){
/*C alamacena el valor de la suma de a y b, e imprime en pantalla serie, co la varible c*/
        c=a+b;
        printf("%d ", c);
/*el comando C ddetermina que mientras i sea menor a n menos , la variable a tomara el valor
de la variable b , y l variable b tomara el valor de la varible c, asi el resulatdo de la suma c
se sumara con el valor de c , qeue se determina por el comando if,*/
        if(i<n-1){
            a=b;
            b=c;
        }
    }
//este indica que la serie continua, incluso despues de el numero dado
    printf("…");
    return c;
}
int main (){
    int n;
    printf("serie fibonacci\n");
    precenta();
    scanf("%d", &n);
    serie(n);
    return 0;
}
