#include <stdio.h>Biblioteca estandar en C
#include <stdlib.h>Libreria

int main(int argc,char *argu[])//Añadimos lista 
{
	double lista[argc],suma=0;//Declaramos lista
	double promedio;
for (int i=1;i<argc;i++)//Ciclo for
{
	lista[i]=atof(argu[i]);//Mostramos lista y guardamos elementos convertidos a float
}
for (int i=1;i<argc;i++)//Ciclo for
{
	suma=suma+lista[i];//Sumatoria de la suma con la lista
}
promedio=((double)suma/(argc-1));//Resultado
printf("%.2f\n",promedio);//Se imprime
	
return 0;
}
