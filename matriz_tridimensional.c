#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MatrizTridimensional(int a, int b, int c, int mat[a][b][c]){
    srand(time(NULL));
    for (int k = 0; k < a; k++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int i = 0; i < c; i++)
            {
                mat[k][j][i]=rand()%100+1;
            }
            
        }
        
    }
    return mat[a][b][c];
}

void main(){

    int o, m, n;

    printf("Ingresar el numero de matrices: ");
    scanf("%d", &o);
    printf("Ingresar el numero de filas: ");
    scanf("%d", &n);
    printf("Ingresar el numero de columnas: ");
    scanf("%d", &m);

    int mat[o][m][n];
    mat[o][m][n]=MatrizTridimensional(o, m, n, mat);
    
    for (int k = 0; k < o; k++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {
            printf("\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", mat[k][j][i]);
            }
            
        }
        
    }
    
}