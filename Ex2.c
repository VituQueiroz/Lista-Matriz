#include <stdio.h>

int main() {
    int i, j;
    int mat[3][2];

    for (i=0; i < 3; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for (j = 0; j < 2; j++){
            for(i=0; i < 3; i++){
                printf(" %d ", mat[i][j]);
            }
        printf("\n");
    }
    return 0;
}