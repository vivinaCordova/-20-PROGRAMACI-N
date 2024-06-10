/*Suma de los cubos de los primeros n números
Descripción: Calcular la suma de los cubos de los primeros n números naturales.
Ejemplo: Si n = 3, suma = 1^3 + 2^3 + 3^3 = 36*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "suma de los cubos de los primeros n numero\ningrese número",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("suma de los cubos de los primeros n numero\ningrese número: ");
}
//funcion suma 
int suma(int n){
   int  r=0;
/*el bucle for tiene la condicoon de que mientras i con valor 1, se menor o igual a n 
el bucle vanzara si por el contrario la condicion nose cumple el bucle finalizara
r suma y se actualizara la multilicacion de i por si misma tre veces, la serie se pren
ta a travez de la variable i, imprimendo como el total de la suma "r"*/
    for (int i = 1; i <= n; i++) {
        r+=i*i*i;
        printf("%d^3 ", i);
        if(i<n){
            printf("+ ");
        }
    }
    printf(" = %d", r);
}
int main (){
    int n;
    precentar();
    scanf("%d", &n);
    suma(n);
    return 0;
}