#include <stdio.h>

int main(){
int numero;
printf("ingrese un numero para calcular su factorial");
scanf("%d", &numero);

}

int factorial(int n){
 if (n == 0) // coso base

 return 1;
 else
 return n * factorial( n -1); // caso recursivo

}