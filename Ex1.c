#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int soma = 0;
    int mat[3][3];

    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (i=0; i < 3; i++){
            for(j = 0; j < 3; j++){
                soma += mat[i][j];
            }
    }
    printf("Soma: %d", soma);
    return 0;
}