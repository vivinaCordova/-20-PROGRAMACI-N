/*Sumar los números pares hasta n
Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "sumar los numeros pares hasta n\ningrese numero",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("sumar los numeros pares hasta n\ningrese numero: ");
}
//funcion suma
int suma(int n){
    int i=2, sum=0;
/*el bucle wuile tiene la condicion de que mientras i sea menor o igual a n el 
bucle se cumplira , ademas de imprimier en pantalla la la serie de numero impar
sum se actualiza y suma el valor que alamcena por el nuevo valor que tomara i
el contador de i esta condiconada para aumentar conforme i sume 2 por cada pas*/
    while (i<=n){
        printf("%d ", i);
        if (i<n){
            printf("+ ");
        }
        sum+=i;
        i+=2;
    }
    printf("= %d", sum);
    return sum;
}
int main  (){
    int n;
    precentar();
    scanf("%d", &n);
    suma(n);
    return 0;
}
