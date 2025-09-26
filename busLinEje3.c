
// Busqueda lineal mejorada (CON ARREGLO YA ORDENADO)

#include <stdio.h>

//                arreglo  buscado tamaño indice
void linearSearch(int *arr, int k, int n, int i){
	// Caso base, si el indice (i) es mayor al tamaño del arreglo
	if(i>n){ printf("\n\tEl valor no fué encontrado\n"); return;}

	// Si se encuentra el valor
	if(arr[i] == k){
		printf("\n\tValor encontrado! Se encontró en la posición %d\n", i);
		return;
	}
	
	// línea recursiva
	linearSearch(arr, k, n, i+1);
	return;
}

int main() {

	printf("\n.-.-.-Algoritmo de busqueda RECURSIVA-.-.-.\n\n");

	int arr[] = {2, 5, 7, 3, 2, 11, 4, 5, 6, 7, 9, 8, 53};

	int n = sizeof(arr) / sizeof(arr[0]);	// Tamaño del arreglo
	int k = 0, opc = 0;						// Numero que se busca y opcion de usuario 
	
	do{
		printf("Arreglo oculto de tamaño %d.", n);

		printf("\n¿Qué número desea buscar?: ");
		scanf("%d", &k);

		// Se llama a la funcion con el arreglo, numero buscado
		// tamaño del arreglo e indice inicial
		linearSearch(arr, k, n, 0);

		printf("\n¿Desea buscar otro numero? 1: Si, Otro: No\n");
		scanf("%d", &opc);
		if(opc == 1){
			continue;
		}

		break;
	}while(1);
	
	printf("\n.-.-.-Hasta luego!-.-.-.\n");

	return 0;
}