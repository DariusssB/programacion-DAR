

#include <iostream>

int main(){
	
	int n1;
	int n2;
	int n3;
	
	printf("Ingrese el pirmer numero");
	scanf("%d", &n1);
	
	printf("Ingrese el segundo numero");
	scanf("%d", &n2);
	
	printf("Ingrese el tercer numero");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		printf("El numero mayor es: %d\n", n1);
	}
	
	else if (n2 > n1 && n2 > n3){
		printf("El numero mayor es: %d\n", n2);
	}
	
	else if (n3 > n1 && n3 > n2){
		printf("El numero mayor es: %d\n", n3);
	}
		
	else if(n1 > n3 && n1 == n2){
		printf("El numero mayor es: %d\n", n1);
	}
			
	else if(n1 > n2 && n1 == n3){
		printf("El numero mayor es: %d\n", n1);
	}
		
	else if(n2 > n1 && n2 == n3){
		printf("El numero mayor es: %d\n", n2);
	}
		
	else (){
		printf("Los tres numeros son iguales: %d\n", n1, n2, n3);
	}	
	
	return 0;
}
