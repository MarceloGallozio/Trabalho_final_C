#include<stdio.h>
#include<stdlib.h>

void calcularTaboada(float termo) {
	float res;
	for (int i = 1; i < 11; i++) {
		res = termo * i;
		printf("%.2f X %d: %.2f\n", termo, i, res);
	}
}
int main () {
	float n;
	printf("Digite o numero para calcula a taboada dele:\n");
	scanf("%f", &n);
	if (n <= 0) {
		printf("Digite um numero positivo");
	}
	else {
		calcularTaboada(n);
	}
	return 0;
}