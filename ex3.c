#include<stdio.h>

//Operações aritméticas e expressões

void main(){

int a = 20;
int b = 10;
float c = 1.5;
float d;

d = c * b/a;

printf("Resultado do cálculo: %f\n",d);

d = c * (b/a);

printf("Resultado do cálculo: %f\n",d);

d = b - a * c;

printf("Resultado do cálculo: %f\n",d);

d = (b-c) * a;

printf("Resultado do cálculo: %f\n",d);


}

