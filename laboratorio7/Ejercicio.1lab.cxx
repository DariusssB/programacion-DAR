#include <iostream>

int main(){
	int numero;
	
	printf("Por favor ingrese un numero:\n");
	scanf("%d", &numero);
	
	if(numero%2==0){
		printf("El numero es par");
	}
	else{
		printf("El numero es impar");
	}
	return 0;
	
}


