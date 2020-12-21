
#include <stdio.h>


int main (){
	int num1, num2, mul=0, i=0;
	
	printf("Ingresar numero 1:\n");
	scanf("%d", &num1);
	printf("Ingresar numero 2:\n");
	scanf("%d",&num2);
	
	while(i<num2){
		mul+=num1;
		i++;
	}

	printf("La multiplicacion es: %d",mul);





	
	return 0;
}

