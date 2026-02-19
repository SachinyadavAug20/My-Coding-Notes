#include <stdio.h>

int main()
{
    int arra[3][4][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("arrra[%d][%d][%d]==>%u\n",i,j,k,&arra[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}