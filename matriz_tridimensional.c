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
    
}

void main(){
    int k, m, n;
    
}