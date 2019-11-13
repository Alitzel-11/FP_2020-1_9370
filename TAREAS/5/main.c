#include <stdio.h> //Biblioteca estandar en C
#include <stdlib.h>// Libreria

int valor(char n)//Declare funcion principal 
{ 
    int z;//Declare la variable 
    switch(n)//Como pueden haber varios casos de entrada se utiliza Switch
    {

    case 'J'://Entra con valor J
     z=10;//Sale igual a 10
     break;//Abandona caso

    case 'Q'://Entra con valor Q
     z=10;//Sale igual a 10
     break;//Abandona caso

    case 'K'://Entra con valor K
     z=10;//Sale igual a 10
     break;//abandona caso

    case 'A'://Entra con valor A
     z=11//Sale igual a 11
     break;//Abandona caso

    case 'j'://Entra con valor j
     z=10;//Sale igual a 10
     break;//Abandona caso

    case 'q'://Entra con valor q
     z=10;//Sale igual a 10
     break;//Abandona caso

    case 'k'://Entra con valor k
     z=10;//Sale igual a 10
     break;//Abandona caso

    case 'a'://Entra con valor a
     z=11;//Sale igual a 11
     break;//Abandona caso
       
  }
  
  return z;//Se abandona la funcion

 }

int main(int argc,char* argu[]){//Funcion principal con argumentos
    int imprimir,//Resultado que se va a imprimir
    coi; //Coi significa char o int

    for(int i=1;i<argc;i++)//Se recorre la lista en el subindice 1
    {
        coi=argu[i][0]=='J'||argu[i][0]=='j'||
        argu[i][0]=='Q'||argu[i][0]=='q'||argu[i][0]=='K'
        ||argu[i][0]=='k'||argu[i][0]=='A'||argu[i][0]=='a';//Dependiendo de la entrada coi se tiene un valor booleano
       
        if (coi==1){//Condicione si coi es igual a 1
            imprimir=valor(argu[i][0]); //Dar el resultado
        }
        else
        { 
            imprimir=atoi(argu[i]);//Dar el resultado
        }

        printf("%i\n",imprimir);//Imprimí
    }

    return 0;//Abandona la funcion la ejecucion 
}