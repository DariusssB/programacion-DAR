


#include <stdio.h>

bool primo(int n){
	bool condicion;
	if(n != 1 && n != 0){
		for(int i = 2; i <= n ; i++){
			if(n % i == 0){
				if(n == i){
					condicion = true;
				}
				else {
					condicion = false;
					return condicion;
				}		
	       }
	    }
	}else condicion = false;
	
	return condicion;
}

int main(){
	int n;
	
	printf("Ingrese hasta que numero desea buscar:\n");
	scanf("%d", &n);
	
	
	
	for(int i=1;i<=n;i++){
		if(primo(i)) 
		 printf("%d", i);
	}
	
	
   
	return 0;
}

