#include <stdio.h>

int cuadrado(int num);
void cuadrado2(int num);
void invertir(int a, int b);
void ordenar(int c, int d);

int main(){

    int num;
    int num2;

// a

    printf("ingrese un numero \n");
    scanf("%d",&num);

    num2 = cuadrado(num);

    printf("el numero al cuadrado es: %d \n", num2);

// b
    cuadrado2(num);

// c
    int var=10; //error???
    printf("direccion variable: %d\n", &var);
    printf("contenido variable: %d\n", var);

// d
    int a;
    int b;

    printf("ingrese valor a: \n");
    scanf("%d", &a);

    printf("ingrese valor b: \n");
    scanf("%d", &b);

    
    invertir(a, b);

// e
    int c;
    int d;

    printf("ingrese valor c: \n");
    scanf("%d", &c);

    printf("ingrese valor d: \n");
    scanf("%d", &d);

    ordenar(c, d);

// f ultimo punto no entiendo



    return 0;
}

// -----funciones--------

int cuadrado(int num){
    int num2;

    num2 = num*num;
    return num2;

}

void cuadrado2(int num){ //otro codigo...
    int num2;
    num2 = num*num;
    printf("el numero al cuadrado (otra forma): %d \n", num2);
    
}

void invertir(int a, int b){
int aux;


    aux=a;
    a=b; // 20
    b=aux; //10
    
    printf(" nuevo valor a: %d \n",a);
    printf("nuevo valor b: %d \n",b);
    
}

void ordenar(int c, int d){
int mayor, menor;

    if (c > d)
    {
        mayor = c;
        menor = d;
    }else
    {
        mayor = d;
        menor =c;
    }
    
    printf("orden: %d, %d \n", mayor, menor);
    
}

