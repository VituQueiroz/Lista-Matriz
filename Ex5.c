#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, j, k;
    int mat[2][2], mat_dois[2][2], resultado[2][2];

    puts("Primeira matriz: ");
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    puts("Segunda matriz:") ;   
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat_dois[i][j]);
        }
    }
    
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += mat[i][k] * mat_dois[k][j];
            }
        }
    }
    for (i=0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf(" %d ", resultado[i][j]);
        }
    printf("\n");
    }
    
    return 0;
}