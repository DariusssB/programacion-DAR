#include <stdio.h>
#include <stdlib.h>
#include <string.h>
​

​
int main(){
	FILE* archivo;
	char path[100];
	char nombre_archivo[15];
	int opcion = 0;
	
	while(opcion != 5){
		// MENU
		
		printf("--- MENU ---\n");
		printf("0.- Listar Archivos\n");
		printf("1.- Crear Archivo\n");
		printf("2.- Leer Archivo\n");
		printf("3.- Añadir Registro\n");
		printf("4.- Eliminar Archivo\n");
		printf("5.- Salir\n");
		printf("Ingrese el número de la opción que quiere seleccionar:\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 0: system("dir*.txt");
					break;
			case 1: strcpy(path, "\\Users\\dario\\OneDrive\\Escritorio\\programacion-DAR\\lab11");
					printf("Ingrese el nombre del archivo:\n");
					scanf("%s", nombre_archivo);
					strcat(nombre_archivo, ".txt"); 
					strcat(path, nombre_archivo);
					archivo = fopen(path, "w");
					fclose(archivo);
					break;
			case 2:	strcpy(path, "\\Users\\dario\\OneDrive\\Escritorio\\programacion-DAR\\lab11");
					printf("Ingrese el nombre del archivo que quiere crear:\n");
					scanf("%s", nombre_archivo);
					strcat(nombre_archivo, ".txt"); 
					strcat(path, nombre_archivo);
					archivo = fopen(path, "r");
					if(archivo == NULL){
						printf("El archivo que quiere abrir, no existe.\n");
						} else {
							char nombre[20];
							char apellido[20];
							char telefono[20];
							fscanf(archivo, "%s %s %s", nombre, apellido, telefono);
							printf("%s %s %s\n", nombre, apellido, telefono);
							fclose(archivo);
							
							}
					break;
			case 3: strcpy(path, "\\Users\\dario\\OneDrive\\Escritorio\\programacion-DAR\\lab11");
					printf("Ingrese el nombre del archivo en el que quiere escribir:\n");
					scanf("%s", nombre_archivo);
					strcat(nombre_archivo, ".txt");
					strcat(path, nombre_archivo);
					archivo = fopen(path, "r+");
					if(archivo == NULL){
						printf("El archivo que quiere abrir, no existe.\n");
						} else {
							fseek(archivo, 0, SEEK_END);
							char nombre[20];
							char apellido[20];
							char telefono[20];
							printf("Ingrese el nombre:\n");
							scanf("%s", nombre);
							printf("Ingrese el apellido:\n");
							scanf("%s", apellido);
							printf("Ingrese el teléfono:\n");
							scanf("%s", telefono);
							fprintf(archivo, "%s %s %s\n", nombre, apellido, telefono);
							fclose(archivo);
							}
					break;
			case 4: strcpy(path, "\\Users\\dario\\OneDrive\\Escritorio\\programacion-DAR\\lab11");
					printf("Ingrese el nombre del archivo que quiere eliminar:\n");
					scanf("%s", nombre_archivo);
					strcat(nombre_archivo, ".txt");
					strcat(path, nombre_archivo);
					archivo = fopen(path, "r");
					if(archivo == NULL){
						printf("El archivo que quiere eliminar, no existe.\n");
						} else {
							fclose(archivo);
							remove(path);
							}	
					break;
			case 5: printf("5\n");
					break;
			default: printf("La opción ingresada no es válida.\n");
			}
		
		}
	return 0;
	} 
