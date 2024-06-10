/*Suma de una serie de números fraccionarios
Descripción: Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
Ejemplo: Si n = 3, suma = 1 + 1/2 + 1/3*/
#include <stdio.h>
/*el prodeso void, permite llamar la variable "precentar" tantas veces que se desee
dentro de el algoritmo*/
void presentar(){
    printf("suma de una serie de números fraccionarios \nn=3\n");
}
/*la funcion mcm:
dentro de esta funcion se declaran variable que almacenaran el mcm, el mcd, la suma de 
la serie, */
int mcm(int a){
    int mul=1, i=2, j=1, d=1, sum=0, Mcm;
/*el bucle esta condicionda para que mientras i sea menor o igual a , con valor 3. 
asi el bucle partira desde el 1 hasta 3, la variable mul almacenara la multiplicacion
de el valor de mul por i y se actualizara por cada vuelta, el contador aumentando 
hasta que la condicion se cumpla*/
    printf("%d + ", mul);
    while (i<=a){
       printf("1/%d ",i);
       if(i<a){
            printf("+ ");
        }
        mul*=i;
        i++;
    }
    mul+1;
/*se incia con otro bucle el cual tiene la condicion de que kienras sean igua o mayo a j 
d es la variable que almacenara la divicon de mul y j, por cada vuelta, y sum , sumara el 
valor anterior mas el nuevo valor de d y se actualizara hasta que la condicion se cumpla*/
    while(j<=a){
        d=mul/j;
        sum+=d;
        j++;
    }
/*Mcm es la variable que contiene sum y mul para imprimir en pantalla es esta la que 
retornara el resultado*/
    Mcm=printf(" = %d/%d",sum, mul);
    return Mcm;
}
int main (){
    int a=3;
/*precentar es la variable del proceso void, y se lo puede llamar, a travez de la mismas
y asi mismo llamara dentro de el algoritmo a la funcion mcm*/
    presentar();
    mcm(a);
    return 0;
} 