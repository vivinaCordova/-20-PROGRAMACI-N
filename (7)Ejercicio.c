/*Suma de una serie aritmética
Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
Ejemplo: 1 + 2 + 3 + … + n*/
#include <stdio.h>
/*el proceso precentara en pantalla "Ingrese numero", cada que se la llame dentro de el algoritmo*/
void precentar(){
    printf("ingrese numero: ");
}
//funcion suma
int suma (int n){
/*i es la variable declarada antes del bucle 
con valor i, la variable sum, parte desde el o*/
    int i=1, sum=0;
/*el comando bucle, tiene la condicion que mientras i sea menor y igual a n, el comando sera verdadero
si la condicion  es falsa el comando finalizara el comando suma almacenara el valor que es la suma de la variable i, por cada vuelta la variable 
sumara el valor anterior por el nuevo valor que tomara la variable i y el contador continuara 
hasta que la condicion sea cumplida*/
    while (i<=n){
        printf("%d ", i);
        if (i<n){
            printf("+ ");
        }
        sum+=i;
        i++;
    }
    printf(" = %d ", sum);
    return sum;
}
int main(){
    int n;
    printf("suma de una serie arirmetica hasta n numeros\n");
    precentar();
    scanf("%d", &n);
    suma(n);
    return 0;
}