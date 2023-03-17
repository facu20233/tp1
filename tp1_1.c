#include <stdio.h>

int main(){

    printf("hola mundo \n");

    int *p;
    int a=10;
    int x;

    p = &a;

    x = sizeof(a);

    printf("El contenido del puntero: %d \n ", *p);
    printf("La direccion de memoria almacenada por el puntero: %d \n",p);
    printf("la direccion de memoria de la variable: %d \n", &a);
    printf("la direccion de memoria del puntero: %d \n", &p);
    printf("el tamanio de memoria utilizado por esa variable usando la funcion: %d \n", x);





    return 0;
}

