// programa para preencher um matriz de 
// ordem n com os elementos da diagonal principal preencher em um vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, j;

	printf("Digite a ordem da matriz quadrada\n");
	scanf("%d", &n);
	int matriz[n][n], vetor[n];

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("Digite valores para a matriz\n");
			scanf("\n%d", &matriz[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == j) {
				vetor[i] = matriz[i][j];
				printf("%d\n", vetor[i]);
			}
		}
	}

	return 0;
}