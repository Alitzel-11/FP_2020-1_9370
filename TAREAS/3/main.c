#include <stdio.h>//Biblioteca standard de C
#include <stdlib.h>//Libreria que contiene funciones como atoi y atof

int main (int argc, char *argu[])//Añadí lista fuera del programa
{
float numero,operador,suma,resta,multip,division;//Declare variables
	numero=atof(argu[1]);//Convierte argumento o variable float
	operador=atof(argu[2]);//Convierte argumento o variable float
suma=numero+operador;//Declaré la operación suma
printf("%.2f\n",suma);//Imprimí el resultado de la suma
	resta=numero-operador;//Declaré la operación resta
	printf("%.2f\n", resta);//Imprimí el resultado de la resta
multip=numero*operador;//Declaré la operación multiplicación
printf("%.2f\n",multip);//Imprimí el resultado de la multiplicación
	division=numero/operador;//Declaré la operación división
	printf("%.2f\n", division);//Imprimí el resultado de la división
	
	

	
return 0;//Cerramos el programa
}
