#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argu[])
{
	int m;
	char *palabra;
	for (int i=1;i<argc;i++){
		palabra=argu[i];
		printf("%s", palabra);
	}
	printf("\n");
	return 0;
}
