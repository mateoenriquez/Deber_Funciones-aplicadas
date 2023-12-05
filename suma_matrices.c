#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SumMatrices(int a, int b, int ma[a][b], int ma2[a][b], int res[a][b]){
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            res[i][j]=ma[i][j]+ma2[i][j];
        }
        
    }
    
    return res[a][b];
}

void main(){
    int m, n;
    srand(time(NULL));
    printf("Ingresar el numero de filas: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas: ");
    scanf("%d", &m);
    int mat[n][m], mat2[n][m], resultado[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat[i][j]=rand()%100+1;
            mat2[i][j]=rand()%100+1;

        }
        
    }

        printf("\n\nMatriz 1\n");
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);

        }
        
    }

        printf("\n\nMatriz 2\n");
        for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat2[i][j]);

        }
        
    }
    
    resultado[n][m]=SumMatrices(n, m, mat, mat2, resultado);

    printf("\n\nSuma\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("%d ", resultado[i][j]);

        }
        
    }
}