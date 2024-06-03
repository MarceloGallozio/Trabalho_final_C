#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int num_referencia;
	int maior = 0, aparece = 0;
	printf("Digite o numero de referencia:\n");
	scanf("%d", &num_referencia);
	int vet[10];
	for (int i = 0; i < 10; i++){
		printf("Digite o %d numero\n", i+1);
		scanf("%d", &vet[i]);
		if (vet[i] == num_referencia) {
			aparece++;
		}
	}
	printf("Os numeros maiores que o numero de referencia sao:\n");
	for (int i = 0; i < 10; i++) {
		if (vet[i] > num_referencia) {
			printf("%d ", vet[i]);
		}	
	}
	printf("\n");
	printf("O numero de referencia apareceu %d vezes.\n", aparece);
	return 0;
}