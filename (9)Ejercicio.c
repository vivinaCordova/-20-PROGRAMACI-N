/*Número de dígitos de un número
Descripción: Contar el número de dígitos de un número.
Ejemplo: 12567 tiene 5 dígitos*/
#include<stdio.h>
/*el proceso precenta en pantalla "Ingrese numero", cada que se lo llame dentro 
de el algoritmo */
void precenta(){
   printf("ingrese numero: ");
}
//funcion "numero"
int numero(int n){
/*d es el residuo de una divicion, i es la vatiable declarada antes*/
    int d=0, i=0;
/*el bucle funciona de modo que mientras n no sea igual a 0, el bulcle continuara
d alamacena el residua de n divido a 10, y n se acrualizara, divido entre 10 y el
contador conatar hasta que la condcion se cumpla*/
    for (; n!=0;) {
        d=n%10;
        n/=10;
        i++;
    }
    printf("%d digitos", i);
    return i;
}
int main (){
    int n, d=0,i=0;
    printf("numero de digitos de un nmero\n");
    precenta();
    scanf("%d", &n);
    numero(n);
    return 0;
}