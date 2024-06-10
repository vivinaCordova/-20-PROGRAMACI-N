/*Suma de los cuadrados de los primeros n números
Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "suma de los cuadrados de los primeros n 
numero\ningrese número",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("suma de los cuadrados de los primeros n numero\ningrese número: ");
}
//funcion suma
int suma (int n){
    int r=0;
/*el bucle for tiene la condicoon de que mientras i con valor 1, se menor o igual a n 
el bucle vanzara si por el contrario la condicion nose cumple el bucle finalizara
r suma y se actualizara la multilicacion de i por si misma dos veces, la serie se pren
ta a travez de la variable i, imprimendo como el total de la suma "r"*/
    for (int i = 1; i <= n; i++) {
        r+=i*i;
        printf("%d^2 ", i);
        if(i<n){
            printf("+ ");
        }
    }
    printf(" = %d", r);
    return r;
}
int main (){
    int n, r=0;
    precentar();
    scanf("%d", &n);
    suma(n);
    return 0;
}