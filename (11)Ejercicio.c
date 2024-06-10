/*Encontrar el MCD (Máximo Común Divisor)
Descripción: Calcular el MCD de dos números.
Ejemplo: MCD de 54 y 24 es 6*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "Encontrar el MCD\ningrese numero", 
cada que se la llame dentro de el algoritmo*/
void precenta(){
   printf("ingrese numero: ");
}
//funcion MCD
int MCD (int a, int b){
    int mcd;
    /*el bucle, tiene la condicion de que mientras el segundo valor que ingresa el
usuario no sea igual a 0, el bucle se cumplira, si no finalizara
dentro del bucle se define la varaible t que almacena el valor de la variable
b, b es igual a el residua de la divicion de la variable a y b
a es igual a t*/
    do {
        int t = b;
        b = a % b;
        a = t;
    } while (b != 0);
/*el mcd, solo se le dara un valor una vez finalize el bucle, este indica, que 
el valor final de el mcd, siempre sera, cuando el bucle finalize, y este impr-
imiendo a*/
    mcd = a;
    printf("El Máximo Común Divisor (MCD) es: %d\n", mcd);
    return mcd;
}

int main() {
    int a, b;
    printf("Encontrar el MCD\n");
    precenta();
    scanf("%d", &a);
    precenta();
    scanf("%d", &b);
    MCD(a, b);
    return 0;
}