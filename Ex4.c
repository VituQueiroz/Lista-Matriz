#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, j, maior, menor;
    int mat[3][3];

    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++)
            if (i == 0 && j == 0) {
                maior = menor = mat[i][j];
            } 
            else {
                if (mat[i][j] > maior) {
                    maior = mat[i][j];
                }
                else if (mat[i][j] < menor) {
                    menor = mat[i][j];
                }
        }
    }
    printf("Elemento minimo: %d \n", menor);
    printf("Elemento maximo: %d", maior);
    return 0;
}