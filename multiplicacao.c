// A quarta questão é para criar um programa que 
//leia duas matrizes, A e B, e faça a multiplicação de A por B, caso possível.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include <ncurses.h>

int main()
{
	int lin1, lin2, col1, col2, i, j, n;
	printf("\t===========================\n");
	printf("\t|MULTIPLICAÇÃO DE MATRIZES|\n");
	printf("\t===========================\n");
	printf("\n");
	printf("\t\t==========\n");
	printf("\t\t|MATRIZ A|\n");
	printf("\t\t==========\n");
	printf("\tNúmero de Linhas:  ");
	scanf("%d", &lin1);
	printf("\tNúmero de Colunas: ");
	scanf("\t%d", &col1);
	printf("\n");
	printf("\t\t==========\n");
	printf("\t\t|MATRIZ B|\n");
	printf("\t\t==========\n");
	printf("\tNúmero de Linhas:  ");
	scanf("%d", &lin2);
	printf("\tNúmero de Colunas: ");
	scanf("\t%d", &col2);
	printf("\n");

	if (col1 != lin2) {
		printf("Erro!\n");
		printf("Não é possível realizar a operação\n");
		printf("Número de colunas da matriz A é diferente do número de linhas da matriz B\n");
	}
	else {
		int matrizA[lin1][col1], matrizB[lin2][col2], matrizC[col1][lin2];
		printf("\t==============================\n");
		printf("\t|DIGITE VALORES PARA MATRIZ A|\n");
		printf("\t==============================\n");
		for (i = 0; i < lin1; i++) {
			printf("\t%dº linha\n", i + 1);
			for (j = 0; j < col1; j++) {
				printf("\t%d coluna\n", j + 1);
				printf("\t");
				scanf("%d", &matrizA[i][j]);
			}
		}

		printf("\t==============================\n");
		printf("\t|DIGITE VALORES PARA MATRIZ B|\n");
		printf("\t==============================\n");
		for (i = 0; i < lin2; i++) {
			printf("\t%dº linha\n", i + 1);
			for (j = 0; j < col2; j++) {
				printf("\t%d coluna\n", j + 1);
				printf("\t");
				scanf("%d", &matrizB[i][j]);
			}
		}

		for (i = 0; i < lin1; i++) {
			for (j = 0; j < col2; j++) {
				matrizC[i][j] = 0;
				for (n = 0; n < col1; n++) {
					matrizC[i][j] += matrizA[i][n] * matrizB[n][j];
				}
			}
		}

		printf("\t=======================\n");
		printf("\tMultiplicação da Matriz\n");
		printf("\t=======================\n");
		for (i = 0; i < lin1; i++) {
			for (j = 0; j < col2; j++) {
				printf("\t%d\t", matrizC[i][j]);
			}
			printf("\n");
		}
	}



}