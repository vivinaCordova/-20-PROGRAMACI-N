//Radicación mediante restas sucesivas
//Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
//Ejemplo: 27^(1/3) = 3
#include <stdio.h>
/*el proceso void, permite que que "ingrese numero", cada que se desea precentar 
en pantalla las veces que desee*/
void precenta(){
   printf("ingrese numero: ");
}
/*La función "radicacion":
}el bucle wuile tiene la condcion de que mientras n sea mayor o igual a cero
n se actualizara la resta de la multiplicacion de  tres veces y i ira aumentando
el bucle finalizara, el contador i se restara o decendera una vez, puesto que 
 no esta dentro del bucle*/
int radicacion(int n){
    int i=1;
    while (n>=0){
        n -= (i*i*i);
        i++;
    }
    i--;
    printf("radicacion es %d", i);
    return i;
}
int main(){
    int n;
    printf("radicacion mediantes restas sucesivas\n");
    precenta();
    scanf("%d", &n);
    radicacion(n);
    return 0;
}