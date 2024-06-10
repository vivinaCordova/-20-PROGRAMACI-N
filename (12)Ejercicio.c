/*Sumar los números impares hasta n
Descripción: Calcular la suma de todos los números impares desde 1 hasta n.
Ejemplo: Si n = 10, suma = 1 + 3 + 5 + 7 + 9 = 25*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "sumar los numeros impares hasta n\ningrese un numero",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("sumar los numeros impares hasta n\ningrese un numero: ");
}
int suma(int n){
    int i=1, sum =0;
    /*el bucle wuile tiene la condicion de que mientras i sea menor o igual a n el 
bucle se cumplira , ademas de imprimier en pantalla la la serie de numero impar
sum se actualiza y suma el valor que alamcena por el nuevo valor que tomara i
el contador de i esta condiconada para aumentar conforme i sume 2 por cada pas*/
    while (i<=n){
        printf("%d ", i);
        if(i<n){
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
