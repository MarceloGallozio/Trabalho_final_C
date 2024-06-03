#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int n;
	printf("Digite o numero de elementos:\n");
	scanf("%d", &n);
	int vet[n];
	for (int i = 0; i < n; i++) {
		printf("Digite o %d elemento:\n", i+1);
		scanf("%d", &vet[i]);		
	}
	printf("Numeros pares:\n");
	for (int i = 0; i < n; i++) {
		if (vet[i] % 2 == 0) {
			printf("%d ", vet[i]);
		}
	}
	printf("\n");
	printf("Numero impares:\n");
	for (int i = 0; i < n; i++) {
		if (vet[i] % 2 != 0) {
			printf("%d ", vet[i]);
		}
	}
	return 0;
}