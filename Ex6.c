
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");
    int i, j;
    int resultado = 0;
    int mat[3][3], mat_dois[3][3];

    puts("Primeira matriz: ");
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    puts("Segunda matriz:") ;   
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &mat_dois[i][j]);
        }
    }
    for (i=0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] == mat_dois[i][j]){
                resultado = 0;
            }
            else{
                resultado = 1;
                break;
            }
        }
        
    }
    if (resultado == 0) {
        printf("As matrizes são idênticas");
    }
    else{
        printf("As matrizes não são idênticas");
    }
    return 0;
}
