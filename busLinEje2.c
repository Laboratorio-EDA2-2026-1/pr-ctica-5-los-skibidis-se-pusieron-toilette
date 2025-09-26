
// Busqueda lineal mejorada (CON ARREGLO YA ORDENADO)

#include <stdio.h>

void linearSearch(int *arr, int k, int n){
	for (int i = 0; i < n; i++) {
		if(arr[i] == k){
			printf("\n\tValor encontrado! Se encontró en la posición %d\n", i);
			return;
		}
		// Si el numero en el arreglo es mas grande que el numero que se busca
		if(arr[i] > k){
			printf("\n\tEl valor no fué encontrado.\n");
			return;
		}
	}

	return;
}

int main() {

	printf("\n.-.-.-Algoritmo de busqueda MEJORADA-.-.-.\n\n");
	// Es muy grande y el arreglo ya está ordenado
	int arr[] = {2, 2, 3, 3, 4, 5, 6, 7, 7, 8, 9, 11, 56};

	int n = sizeof(arr) / sizeof(arr[0]);	// Tamaño del arreglo
	int k = 0, opc = 0;						// Numero que se busca y opcion de usuario 
	
	do{
		printf("Arreglo oculto.");

		printf("\n¿Qué número desea buscar?: ");
		scanf("%d", &k);
		linearSearch(arr, k, n);

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