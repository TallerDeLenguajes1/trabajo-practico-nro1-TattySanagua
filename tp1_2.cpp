#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cuadrado (int num);
void cuadrado2 (int num);
void invertir (int *a, int *b);
void ordenar(int *a, int *b);

int main(){

 int base;

 printf("Ingrese numero1: \n");
 scanf("%d", &base);
 printf("El cuadrado del numero1 es: %d \n\n", cuadrado(base));

 cuadrado2(base);

 //(iii)

 printf("Direccion de memoria del numero1: %p \n", &base);
 printf("Contenido de la variable numero1: %d \n\n", base);

int valora, valorb;

printf("Ingrese al valor a: \n");
scanf("%d", &valora);
printf("Ingrese el valo b: \n");
scanf("%d", &valorb);

invertir(&valora, &valorb);
printf("Valores invertidos a y b: %d %d \n\n", valora, valorb);

ordenar(&valora, &valorb);
printf("Valores ordenados de menor a mayor: %d %d \n\n", valora, valorb);

//(vi)
int N, i, A, B;

printf("Cuantos pares de valores desea ingresar?: ");
scanf("%d", &N);

for(i=1; i<=N; i++){

	printf("\nIngrese par de valores a y b: ");
	scanf("%d %d", &A, &B);
	ordenar(&A, &B);
	printf("\nValores ordenados de menor a mayor: %d %d \n", A, B);
}

 return 0;

}

//(i)
int cuadrado (int num){

	return (num * num);
}

//(ii)
void cuadrado2 (int num){
	
	int potencia;

	printf("Ingrese numero2: \n");
	scanf("%d", &num);
	potencia = num * num;
	printf("El cuadrado del numero2 es: %d \n\n" ,potencia);

}

//(iv)
void invertir (int *a, int *b){

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

//(v)

void ordenar(int *a, int *b){

	int temp;

	if(*a > *b){

		temp = *a;
		*a = *b;
		*b = temp;
	}
}