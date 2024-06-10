/*Verificar si un número es primo
Descripción: Determinar si un número es primo.
Ejemplo: 7 es primo, 10 no es primo*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "Ingrese numero", cada que se la llame a algoritmo*/
void precenta(){
   printf("ingrese numero: ");
}
//funcion verificar 
int verificar (int n){
    int p=1;
    /*ocupo el comando if con al condicion de que si  n es menor que i
la variable p es igual a 0, por lo tanto no hay numero primos
esto esta condicionado con el fin de n tiene que ser mayor que 1 
en el caso de que esto no se cumpa , else , continuara con el coma*/
    if (n <= 1) {
        p = 0;
    } else {
        int i = 2;
        do {
            if (n % i == 0) {
                p = 0;
            }
            i++;
/*la variable i parte desde el 2 hasta que la el numero ingresado por el usuario dividido entre 2
y la operacion logica && la variable p, se aumenta 
hace uso de el comando if, con la condicion de que el residuo de n y i sea igual a 0
p es igual a 0 */
        } while (i <= n / 2 && p);
    }
/*el comado if, condiciona que si p es igual a cero el numero es primo 
si no, else, el numero no es primo*/ 
    if (p)
        printf("%d es un número primo.\n", n);
    else
        printf("%d no es un número primo.\n", n);
    return n;
}
int main() {
    int n;
    printf("verificar si un numero es primo\n");
    printf("Ingrese un número: ");
    scanf("%d", &n);
    verificar(n);
    return 0;
}