 #include<stdio.h>//Biblioteca estandar en C
 #include<stdlib.h>//Libreria   
 
 double raiz(double num, double tolerancia, double resultado)//Llame a la funcion raiz
 {
     double division,diferencia;//Declare dos variables

     division=num/resultado;//Es el algoritmo para raiz
     diferencia=resultado-division;
     diferencia=diferencia> 0? diferencia:-diferencia;//La diferencia sea con valor absoluto
     if(diferencia<=tolerancia)//Regresa al resultado si la diferencia es menor o igual que la tolerancia
     
     {
         return resultado;//Elcandidato a resultado
     }
     
     else//Si o no

     {

         resultado=(resultado+division)/2;//Se busca un nuevo candidato
         return raiz(num,tolerancia,resultado);//Con el nuevo candidato se regresa el valor
     }

 }
     
int main (int argc, char*argu[])
{
    double num,tolerancia,resultado;//Declare las tres variables necesarias
    num=atof(argu[1]);//Se guardan los argumentos en otras variables tipo float
    tolerancia=atof(argu[2]);
    resultado=atof(argu[3]);
    resultado=raiz(num,tolerancia,resultado);//Se guarda el resultado en esta variable
    printf("%lf\n",resultado);//Se imprime

}