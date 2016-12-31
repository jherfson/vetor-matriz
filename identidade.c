// criar um programa que gere a mattriz identidade
// de ordem n, onde n é informado pelo usuário

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;

    printf("digite a ordem da matriz quadrada\n");
    scanf("%d", &n);
    int matriz[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            if (i == j)
                matriz[i][j] = 1;
            else matriz[i][j] = 0;

    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}