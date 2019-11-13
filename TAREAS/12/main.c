 #include<stdio.h>//Biblioteca estandar en C
 #include<stdlib.h>//Libreria   
 
 int saludos(int personas)//Esta es la funcion de saludos de personas
 {
     int total,saludo;//Total sera la suma de saludos y saludo los saludos de cada persona
     saludo=personas-1;//Saludo son las personas menos el mismo

     if (saludo==0){//El caso base es que si solo hay una persona no hay saludos
         return saludo;//regresa el valor
         
     }

     total=saludo+saludos(personas-1);//Suma total de los saludos
     return total;//regresa el valor
 }
 int main(int argc, char *argu[]){
     int resultado,personas;
     personas=atoi(argu[1]);//Primer argumento
     resultado=saludos(personas);//Se llama a la funcion 
     printf("%i\n",resultado);//Y se imprime

     return 0;
     
 }