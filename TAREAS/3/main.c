#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argu[]){
	float numero,operador,suma,resta,multip,division;
	numero=atof(argu[1]);
	operador=atof(argu[2]);
	suma=numero+operador;
    printf("\n La suma es: %.2f\n",suma);
    resta=numero-operador;
	printf("\n La resta es: %.2f\n", resta);
	division=numero/operador;
	printf("\n La division es: %.2f\n", division);
	multip=numero*operador;
	printf("\n La multiplicacion es: %.2f\n",multip);

	return 0;

 }

 