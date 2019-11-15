#include <stdio.h>//Biblioteca standard de C
#include <stdlib.h>//Libreria
int main(int argc,char* argu[]){//Funcion principal y argumentos; argv y argc son la forma en la que los argumentos en linea se pasan a main
      float n1,n2,resultado=1;//resultado que se va a imprimir
  //atof convierte una cadena de caracteres a float 
    n1= atof(argu[1]);//Argumento 1 representara a n1
    n2= atof(argu[2]);//Argumento 2 representara a n2
   for(int a=1;a<=n2;a++){//Variable de control a=1, bucle de continuacion a<= n2 y el incremento de a++
resultado=resultado*n1;//El resultado
}
       printf("%.2f",resultado); //Imprimí el resultado
    return 0;//La ejecucion abandona la funcion
    
}
