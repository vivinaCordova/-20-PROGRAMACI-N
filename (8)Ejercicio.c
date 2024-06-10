/*Producto de una serie geométrica
Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
Ejemplo: 2, 4, 8, 16, */
#include<stdio.h>
/*el proceso premite precentar en pantalla "Ingrese numero", cada que se la llame a algoritmo*/
void precentar(){
    printf("ingrese numero: ");
}
//funcion producto
int producto (int n){
//i es la variable declada antes de el bucle, mul almacena la multiplicacion de la serie
    int i=2, mul=1;
/*el bucle do wuile imprime imprime la serie la cual es multiplicada por dos, 
con la actlaizacion de que que el bucle vaya aumentando multiplacndo 2 el avlor de i
imprime en pantalla la seriem con i
para precentar la multiplicacion total sea hace uso de la variable mul, la cual almacen
el valor anteriory lo multiplica por el nuevo valor de la serie */
//todo mientras la condicion se cumpla,
//este algoritmo precenta en pantalla la serie y el valor el prducto de la serie
    do{
        printf("%d ",i);
        mul*=i;
        i*=2;
    } while (i<=n);  
    printf("= %d", mul);  
    return mul;
}
int main(){
    int n, i=2,mul=1;
    printf("producto de una serie geometrica\n");
    precentar();
    scanf("%d", &n);
    producto(n);
    return 0;
}