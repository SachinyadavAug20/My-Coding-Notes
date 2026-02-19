#include <stdio.h>

int main()
{
    int table_2_7_9[3][10];
    int mul[3]={2,7,9};
    //FILL ARRAY
    int t;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
           
            table_2_7_9[i][j] = mul[i] * (j + 1);
        }
    }

    //TO PRINT ARRAY
    for (int i2 = 0; i2 < 10; i2++)
    {
        for (int j2 = 0; j2 < 3; j2++)
        {
            printf("%d ",table_2_7_9[j2][i2]);
        }
        printf("\n");
    }
    

    return 0;
}