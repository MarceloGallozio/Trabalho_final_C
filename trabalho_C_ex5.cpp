#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int matricula;
	float AV, sim1, sim2;
	char nome[50];
} Alunos;
int main (void) {
	int n;
	printf("Quantos alunos tem na turma?\n");
	scanf("%d", &n);
	Alunos aluno[n];
	for (int i = 0; i < n; i++) {
		printf("Digite a matricula do %d aluno:\n", i+1);
		scanf("%d", &aluno[i].matricula);
		printf("Digite o nome do %d aluno:\n", i+1);
		scanf("%s", &aluno[i].nome);
		printf("Digite a nota da AV do %d aluno:\n", i+1);
		scanf("%f", &aluno[i].AV);
		printf("Digite a nota do Simulado 1 do %d aluno:\n", i+1);
		scanf("%f", &aluno[i].sim1);
		printf("Digite a nota do Simulado 2 do %d aluno:\n", i+1);
		scanf("%f", &aluno[i].sim2);
	}
	for (int i = 0; i < n; i++) {
		printf("Dados do aluno:\n");
		printf("Matricula: %d\n", aluno[i].matricula);
		printf("Nome: %s\n", aluno[i].nome);
		printf("AV: %.2f\n", aluno[i].AV);
		printf("Simulado 1: %.2f\n", aluno[i].sim1);
		printf("Simulado 2: %.2f\n", aluno[i].sim2);
	}
	return 0;
}