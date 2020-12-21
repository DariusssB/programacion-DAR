


#include <stdio.h>

int main(int argc, char **argv)
{
	int numero;
	int i;
	
	do{
		printf("Introduce un numero: ");
		scanf("%d", &numero);
	}while(numero<=0);
	
	for(i=1; i<=numero/2; i++){
		if(numero % i == 0){
		      printf("%d", i);
		}
		
		
	}
	printf("%d", numero);
			
	return 0;
}

