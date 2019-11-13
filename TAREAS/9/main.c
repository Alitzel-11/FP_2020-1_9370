#include<stdio.h>//Biblioteca estandar en C
#include<stdlib.h>//Libreria	
#include<string.h>//Otra libreria
int main (int argc, char *argu[])//Añadimos lista fuera del programa

{

     int numero;//Es el numero de digitos
     numero=strlen(argu[1]);//Strlen se utiliza para saber cuantos caracteres tiene
     char arguc[numero];// Es una nueva lista para guardar el numero
     int resultado=0;//El resultado empieza con el neutro aditivo
     int digitos[numero];//Es una nueva lista para guardar el numero

     for(int i=0;i<numero;i++)//Sume los caracteres de acuerdo con el numero de digitos
     {
         arguc[i]=argu[1][i];//Se guarda en la lista de caracteres
         digitos[i]=atoi(&arguc[i]);//Se guarda en la lista de enteros
    resultado=resultado=resultado+digitos[i];//Sume cada digito
     }

     printf("%i\n",resultado);//Imprimi el resultado


 return 0;
 }