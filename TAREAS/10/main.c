#include<stdio.h>//Biblioteca estandar en C
#include<stdlib.h>//Libreria 
#include<math.h>
void raicesR(double a, double b, double c, double determinante)//Para reales positivas
{
    double x1,x2;
    double parte;
    parte=sqrt(determinante);
    x1=(-b/2*a)+(parte/2*a);
    x2=(-b/2*a)-(parte/2*a);
    printf("%.2lf\n",x1);
    printf("%.2lf\n",x2);
} 

void raicesI(double a, double b, double c, double determinante)//Para raices imaginarias
{
  //Para evitar que la raiz sea con numero negativo, usamos el signo menos
  double x11,x12,x21,x22;
  double parte;
  parte=sqrt(-determinante); 
  x11=(-b/2*a); 
  x12=parte/(2*a);
  x21=(-b/2*a); 
  x22=parte/(2*a);
  if(b==0){
      x11=0;
      x22=0;
  }
  printf("%.2lf+%.2lfi\n",x11,x12);//Imprimir imaginarios
  printf("%.2lf+%.2lfi\n",x21,x22);
}
void raizunica(double a,double b)//Que imprima solo si hay una solución
{
double a1;
 a1=(-b/2*a);
printf("%.2lf\n",a1);
}
int main(int argc, char* argu[]){
   double a,b,c,determinante;
   a=atof(argu[1]);
   b=atof(argu[2]);
   c=atof(argu[3]);
   determinante=pow(b,2);//Determinante
   determinante=determinante-(4*a*c);
if (determinante==0)//Posibles casos
{
    raizunica(a,b);
}
else{
    if (determinante>0)
    {
        raicesR(a,b,c,determinante);
    }
    else
    {
        raicesI(a,b,c,determinante);
    }
}
return 0;
}
  