/*Calcular el n-ésimo número triangular
Descripción: Calcular el n-ésimo número triangular.
Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10*/
#include <stdio.h>
/*el proceso premite precentar en pantalla "suma de los cubos de los primeros n numero\ningrese número",
 cada que se la llame a algoritmo*/
void precentar(){
    printf("Calcular el n-esimo numero triangular\ningrese un numero: ");
}
//funcion calcu
int pato(int n){
    int i=1, sum=0;
/*el bucle establece que mientras i sea menor o igual a n el bucle se cumplira, este imprime
la serie con la variable i, sum es la variable que suma su valor almacenada mas i y se actualiza
tomando el nuevo valor de la suma, el bucle continia hasta que la condcion sea falsa
imprime en pantalla la sum , pues es la suma total de los numero*/
    while (i<=n) {
        printf("%d ", i);
        if(i<n){
            printf("+ ");
        }
        sum+=i;
        i++;
    }
    printf("= %d", sum);
    return sum;
}
int main (){
    int n;
    precentar();
    scanf("%d", &n);
    pato(n);
    return 0;
}