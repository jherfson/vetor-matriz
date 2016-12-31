// criar um programa para preencher uma matriz quadrada,
//  de ordem n, onde a diagonal principal  é preenchida 
//  com o caractere X, a parte de cima da diagonal principal 
//  é preenchida com o caractere + e a parte abaixo da diagonal principal 
//  é preenchida com o caractere -.

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n, i, j;

	printf("Digite a ordem da matriz quadrada\n");
	scanf("%d", &n);
	char matriz[n][n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				matriz[i][j] = 'X';				
			}
			if (i < j) {
				matriz[i][j] = '+';
				
			} 
			if (i > j) {
				matriz[i][j] = '-';
			}
		}

	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++){
			printf("%c\t", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}