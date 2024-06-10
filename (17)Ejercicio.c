/*Producto de una serie de números fraccionarios
Descripción: Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
Ejemplo: Si n = 3, producto = 1 * 1/2 * 1/3
*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "suma de los cubos de los primeros n numero\ningrese número",
 cada que se la llame a algoritmo*/
void precenta(){
   printf("Producto de una serie de numeros fraccionarios\ningrese numero: ");
}
//funcion producto
int producto(int n){
    int mul =1, r=1;
    printf("%d * ", r);
/*el bucle parte con i con valor 2, hasta que la condicion de que i sea menor o igual
a n el bucle avandara sino finalizara, este imprime en pantalla la serie de numeros 
mul almacena el valor de la multicacion de el valor que almacena por el valor de el 
numero de la serie , y se actualiza tomando el resultado como su nuevo valor hasta 
que el bucle se cumpla, precentando en pantalla mul*/
    for (int i = 2; i <= n; i++){
        printf("1/%d ", i);
        if(i<n){
            printf("* ");
        }
        mul*=i;
    }
    printf(" = %d", mul);
    return mul;
}
int main (){
    int n, mul=1, r=1;
    precenta();
    scanf("%d", &n);
    producto(n);
    return 0;
}