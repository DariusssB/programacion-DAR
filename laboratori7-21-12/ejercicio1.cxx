


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Los numeros pares entre 0 y 100 son; \n");
	int i;
	float a;
	
	
	for(i=0;i<=100;i++)
	{
		a=i%2;
		if(a==0)
		printf("%d\n",i);
	}
	
	system("pause");
	
	return 0;
}

