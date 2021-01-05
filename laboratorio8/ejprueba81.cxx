


#include <iostream>

int main(){
	//TIPO - NOMBRE - CANTIDAD DE ELEMENTOS
	char tablero[3][3];
	int i , j;
	int fila, col, ganador = 0, turno = 1, t = 0;
	
	
	//Titulo del Codigo
	printf("EL GATO CON BOTAS!\n");
	printf("\n");
	
	//Estructura del tablero
	for((i = 0); (i < 3); (i++)){
		
		for((j = 0); (j < 3); (j++)){
			
			tablero[i][j]='-';
			printf(("[%c]"), (tablero[i][j]));
			
		}
		
		printf("\n");
	}
	
	//Intrucciones para el jugador
	printf("\n");
	printf("Intrucciones: Digite el numero de la Fila (f) y Columna (c)\n");
	printf("       c0   c1   c2 \n");
	printf("    f0 [ ]  [ ]  [ ]\n");
	printf("    f1 [ ]  [ ]  [ ]\n");
	printf("    f2 [ ]  [ ]  [ ]\n");
	printf("\n");
	
		do{
			if(turno%2 == 1){
				do{
					printf("\nJugador 1: \n");
					printf("Escoja una fila: ");
					scanf(("%d"), (&fila));
					printf("Escoja una columna: ");
					scanf(("%d"), (&col));
					
					if((tablero[fila][col] != '-')||(tablero[fila][col] == 'X') || (tablero[fila][col] == 'O') || (fila > 2) || (col > 2)){
						printf("\nLAS COORDENADAS INGRESADAS NO SON VALIDAS, INTENTE NUEVAMENTE\n");
					}
				}while((tablero[fila][col] == 'X') || (tablero[fila][col] == 'O') || (fila > 2) || (col > 2));
				
				tablero[fila][col]='X';
				
				
				for((i = 0); (i < 3); (i++)){
					for((j = 0); (j < 3); (j++)){
						printf("[%c]", tablero[i][j]);
					}
					printf("\n");
				}
				turno++, t++;
				
			} else if(turno%2 == 0){
				do{
					printf("\nJugador 2: \n");
					printf("Escoja una fila: ");
					scanf(("%d"), (&fila));
					printf("Escoja una columna: ");
					scanf(("%d"), (&col));
					
					if((tablero[fila][col] != '-')||(tablero[fila][col] == 'X') || (tablero[fila][col] == 'O') || (fila > 2) || (col > 2)){
						printf("\nLAS COORDENADAS INGRESADAS NO SON VALIDAS, INTENTE NUEVAMENTE\n");
					}
				} while((tablero[fila][col] == 'X') || (tablero[fila][col] == 'O') || (fila > 2) || (col > 2));
				
				tablero[fila][col]='O';
				
				
				for((i = 0); (i < 3); (i++)){
					
					for((j = 0); (j < 3); (j++)){
						
						printf(("[%c]"), (tablero[i][j]));
						
					}
					
					printf("\n");
				}
				
				turno++, t++;
			}
			
			if((tablero[0][0] != '-') && (tablero[0][0] == tablero[0][1]) && (tablero[0][0] == tablero[0][2])
			|| (tablero[1][0] != '-') && (tablero[1][0] == tablero[1][1]) && (tablero[1][0] == tablero[1][2])
			|| (tablero[2][0] != '-') && (tablero[2][0] == tablero[2][1]) && (tablero[2][0] == tablero[2][2])
			
			|| (tablero[0][0] != '-') && (tablero[0][0] == tablero[1][0]) && (tablero[0][0] == tablero[2][0])
			|| (tablero[0][1] != '-') && (tablero[0][1] == tablero[1][1]) && (tablero[0][1] == tablero[2][1])
			|| (tablero[0][2] != '-') && (tablero[0][2] == tablero[1][2]) && (tablero[0][2] == tablero[2][2])
			
			|| (tablero[0][0] != '-') && (tablero[0][0] == tablero[1][1]) && (tablero[0][0] == tablero[2][2])
			|| (tablero[0][2] != '-') && (tablero[0][2] == tablero[1][1]) && (tablero[0][2] == tablero[2][0])){
			ganador = 1;
			printf("\nFelicidades!\n");
			}
			if(t == 9){
				
				printf("La partida fue empatada\n");
				break;
				
			}
				
		}while(ganador != 1); 
		
		printf("FIN DE LA PARTIDA\n");
	
	
	return 0;
}
