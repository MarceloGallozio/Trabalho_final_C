#include<stdio.h>
#include<stdlib.h>

int main (void) {
	int qtd_pessoas;
	printf("Digite a quantidade de pessoas na pesquisa:\n");
	scanf("%d", &qtd_pessoas);
	int vet[qtd_pessoas];
	int jovem = 0, adulto = 0, idoso = 0;
	printf("Devem ser digitados apenas pessoas entre 18 e 80 anos.\n");	
	for (int i = 0; i < qtd_pessoas; i++) {	
		do {
			printf("Digite a idade da %d pessoa:\n", i+1);
			scanf("%d", &vet[i]);	
		}	while (vet[i] < 18 || vet[i] > 80);	
		if (vet[i] < 35) {
			jovem++;
		}
		else if (vet[i] < 65) {
			adulto++;
		}	
		else {
			idoso++;
		}
	}
	printf("Em um total de %d pessoas.\n", qtd_pessoas);
	printf("Foram entrevistados %d jovens, %d adultos e %d idosos.", jovem, adulto, idoso);
	return 0;
}