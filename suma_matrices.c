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
    
    return res;
}

void main(){
    
}