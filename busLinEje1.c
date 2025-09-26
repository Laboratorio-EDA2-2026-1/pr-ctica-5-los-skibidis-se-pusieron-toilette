
// Busqueda lineal simple

#include <stdio.h>

void linearSearch(int *arr, int wanted, int n){
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == wanted){
			printf("\n\tValor encontrado! Se encontró en la posición %d\n", i);
			return;
		}
	}

	printf("El valor no fué encontrado.");

	return;
}

int main() {

	printf("\n.-.-.-Algoritmo de busqueda simple-.-.-.\n\n");
	int arr[6] = {3, 5, 7, 3, 2, 6};
	int wanted = 0, opc = 0;
	
	do{
		printf("Arreglo: [3, 5, 7, 3, 2, 6]");

		printf("\n¿Qué número desea buscar?: ");
		scanf("%d", &wanted);
		linearSearch(arr, wanted, 6);

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