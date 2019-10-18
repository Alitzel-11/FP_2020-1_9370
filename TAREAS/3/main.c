#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argu[]){
	float n1,n2,s,r,m,d;
	n1=atof(argu[1]);
	n2=atof(argu[2]);
	s=n1+n2;
    printf("suma:\n%.2f\n",s);
    r=n1-n2;
	printf("resta:\n%.2f\n", r);
	d=n1/n2;
	printf("division:\n%.2f\n", d);
	m=n1*n2;
	printf("producto:\n%.2f\n",m);

	return 0;

 }

 