#include<stdio.h>//Biblioteca estandar en C
#include<stdlib.h>//Libreria 
int main(int argc,char* argu[])//Lista de enteros
{
    int numeros[argc-1];//Varieable e indices
    int i=0, j=1,numero;
    while(i<argc-1)//Copiamos arg a la nueva lista
    {
        numero=atoi(argu[j]);
        numeros[i]=numero;
        i++;
        j++;
    }
    int temporal;//Para no perder datos
    for (i=1;i<argc-1;i++)
    {
        for (j=0;j<argc-1-i;j++)
        { 
            if(numeros[j]>numeros[j+1])//Se ordenan los numeros de la forma adecuada
            {
                temporal=numeros[j];//Guardamos el temporal
                numeros[j]=numeros[j+1];//Se retrocede el numero siguiente
                numeros[j+1]=temporal;//Se cambia el siguiente por el que guardamos en el temporal
          }
       }
    }
    for (int i=0;i<argc-1;i++)//Se imprime
    {
        printf("%i\n",numeros[i]);
    }
}