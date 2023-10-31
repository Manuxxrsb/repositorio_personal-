#include <stdlib.h>
#include <stdio.h>

int suma(int,int);
int resta(int,int);

int main(){

    printf("Hola mundo!");

    //llamada a suma
    int a =suma(1,3);
    printf("\nEl valor de suma fue %d ",a);

    //llamada a resta
    int b = resta(10,6);
    printf("\nEl valor de la resta fue %d",b);

    return 0;
}

int suma(int a,int b){
    return a+b;
}

int resta(int a,int b){
    return a-b;
}
