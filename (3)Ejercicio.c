/*Potencia mediante sumas sucesivas
Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
Ejemplo: 2^3 = 2 * 2 * 2 = 8*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "Ingrese numero", cada que se la llame a algoritmo*/
void precenta(){
   printf("ingrese numero: ");
}
/*la funcion "potencia";
el bucle wuile tiene la condicion de que mientras i sea menor que el segundo valor ingresado
por el usuario que se lo puede interpretar como el exponente, i se actualizara aumetando hasta 
que se cumpla la condicion, y continua con que la variable s, almacena el valor de s multiplicado
por el primer valor hasta que loa condiion se cumpla*/
int potencia(int n1, int n2){
    int i, s=1;
    while (i<n2){
        i++;
        s=s*n1;
    }
    printf("Potencia: %d", s);
    return s;
}
int main (){
    int n1,n2;
     printf("potencia mediante sumas sucesivas\n");
    precenta();
    scanf("%d", &n1);
    precenta();
    scanf("%d", &n2);
    potencia(n1,n2);
    return 0;
}