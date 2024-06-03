#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int vet[10];
	for (int i = 0; i < 10; i++) {
		printf("Digite o %d elemento\n", i+1);
		scanf("%d", &vet[i]);		
	}
	printf("Os elementos divisiveis por 5 e 3 ao mesmo tempo sao:\n");
	for (int i = 0; i < 10; i++) {
		if (vet[i] % 5 == 0 && vet[i] % 3 == 0) {
			printf("%d ", vet[i]);
		}
	}
	return 0;
}
