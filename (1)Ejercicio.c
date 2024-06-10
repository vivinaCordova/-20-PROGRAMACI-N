//Suma de los dígitos de un número
//Descripción: Dado un número, calcular la suma de sus dígitos.
//Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21
#include<stdio.h>
/*Void como proceso para llamarlo dentro de el algoritmo 
cuando desea que me imprima en pantalla "ingrese numero: "*/
void precentar(){
    printf("ingrese un numero: ");
}
//la funcion suma hace:
/*el bucle funciona de modo que contiene el residuo de la divicion de el numero a 10
y por cada vuelta la varaible sum se actualiza y suma el valor de la variable
d por el valor anterior cada Vuelta hasta que se cumpla la condicion, para obtener 
d arroja el primer digito de el numero y n se actualiza cada que se divida n entre 10
por cada vuelta hasta que la condicion se cumpla */
/*el bucle for, se lo condiciana de modo que solo mientras n
sea distinto de o, el bucle  finalizara el bucle*/
int suma (int n){
    int d=0;
    int i=1;
    int sum=0;
    for (; n!=0; i++) {
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("%d", sum);
    return sum;
}
int main (){
    int n, d=0,i=1, sum=0;
    printf("Suma de los digitos de un numero\n");
    precentar();
    scanf("%d", &n);
    suma(n);
    return 0;
}