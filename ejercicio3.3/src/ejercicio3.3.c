#include <stdio.h>
#include <stdlib.h>

int entero(int a);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int retorno;


	printf("ingrese un numero entre 0 y 10: ");
	scanf("%d", &numero);
	retorno = entero(numero);

	return retorno;
}

	int entero(int numero){
		int retorno;

		if(numero >=0 && numero <=10){
			retorno = numero;
		}


		return retorno;
	}

