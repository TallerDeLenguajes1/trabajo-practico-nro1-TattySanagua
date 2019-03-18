#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

	int *punt;

	int var=23;

	punt = &var;

	printf("Contenido del puntero: %d \n", *punt); //(1)
	printf("Direccion de memoria almacenada por el puntero: %p \n", punt); //(2)
	printf("Direccion de memoria de la variable %p \n", &var); //(3)
	printf("Direccion de memoria del puntero: %p \n", *punt); //(4)
	printf("Tamanio de memoria utilizado por la variable: %d", sizeof(var)); //(5)

	// (2) y (3) son iguales ya que el puntero punt almacena la direccion de memoria o posicion de la variable y su contenido.
	// El puntero cuando se lo declara se almacena en otra direccion de memoria distinta de cualquier variable a la que apunte. Por eso es que en (4) se muestra una direccion de memoria diferente que en (2) y (3).

	return 0;
}