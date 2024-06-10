//Inverso de un número
//Descripción: Dado un número, obtener su inverso.
//Ejemplo: 12567 -> 
#include<stdio.h>
/*el proceso void, permite ocupara dentro de el algoritmo multiples veces "ingrese un numero"
en pantalla */
void precentar(){
    printf("ingrese un numero: ");
}
/*la funcion inverso:
el bucle tiene una condicion de que mientras n nose igual a o, este  avanzara con variable i
la variable d almacena por cada vuelta el residuo de la divicion para 10, y va a precentar en 
pantalla d, n por cada vuelta es divido para 10 para almacenar el valor hasta que la condicion 
se cumpla la condicion*/
int inverso(int n){
    int d=0;
    int i;
    for (; n!=0; i++)  {
        d=n%10;
        printf("%d",d);
        n/=10;
    }
    return d;
}
int main (){
    int n, d=0,i;
    printf("Inverso de un numero\n");
    precentar();
    scanf("%d", &n);
    inverso(n);
    return 0;
}