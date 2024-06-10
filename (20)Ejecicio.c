/*Calcular la suma de los factoriales de los primeros n números
Descripción: Calcular la suma de los factoriales de los primeros n números.
Ejemplo: Si n = 3, suma = 1! + 2! + 3! = 1 + 2 + 6 = 9*/
#include<stdio.h>
/*el proceso premite precentar en pantalla "suma de los cubos de los primeros n numero\ningrese número",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("suma de los factoriales hasta n numero \ningrese un numero: ");
}
//funcion mariana
int mariana(int n){
    int i=1, mul =1, sum=0;
/*el bucle do wuile, tiene la condicon de que mientras i sea menor o igual a n
el bucle continuara imprime i como la serie, mul se actializara, el valor de mul
multiplicara si valor por el valor de i, y el resultado sera la actualizacion 
sum, sumara el valor que contiene mas mul, y el resultado sera almacenado nuevamente
sum haci sum sumara la suma de el valor anterior por el nuevo valor de mul*/
    do {
        printf("!%d ", i);
        if(i<n){
            printf("+ ");
        }
        mul*=i;
        sum+=mul;
        i++;
    } while (i<=n);
    printf(" = %d", sum);
    return sum;
}
int main (){
    int n;
    precentar();
    scanf("%d", &n);
    mariana(n);
    return 0;
}