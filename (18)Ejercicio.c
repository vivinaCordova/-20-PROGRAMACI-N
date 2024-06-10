/*Contar los números primos hasta n
Descripción: Contar cuántos números primos hay desde 1 hasta n.
Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "suma de los cubos de los primeros n numero\ningrese número",
 cada que se la llame a algoritmo*/
void precenta(){
   printf("Contador de números primos\nIngrese el número: ");
}
//funcion primos 
int primos(int n){
    int cont =1, i =2, r=1;
    printf("%d ", r);
    do {
/*p es el que calcula si un numero es primo 
aplicamos otra variable como j*/
        int j = 2, p = 1;
        do {
            if (i % j == 0) {
                p = 0;
            }
            j++;
/*mientras i dividido entre dos y p igual a 1, el bucle continuara
si la condcion resulta ser falsa el bucle acabara
si el comandpo if cumple con la condicion de que p es igual a 1 el contador sumara 1 */
        } while (j <= i / 2 && p == 1);
        if (p == 1) {
            printf("%d ", i);
            cont++;
        }
        i++;
    } while (i < n);
//mientras i sea menor que n es bucle continuara, hasta que la condicoon sea falsa
    printf("\nHay %d números primos.", cont);
}
int main() {
    int n;
    precenta();
    scanf("%d", &n);
    primos(n);
    return 0;
}