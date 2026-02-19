 #include<stdio.h>
 
 int main(){
    int arr[3][2];
    //taking value for array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the input for %dth row and %dth coloum(i.e arr[%d][%d]) :",i,j,i,j);
            scanf("%d",&arr[i][j]);
            // arr[i][j]=i+j;
        }
        
    }
    // printing the array
    for (int i2 = 0; i2 < 3; i2++)
    {
        for (int j2 = 0; j2 < 2; j2++)
        {
            printf("%d  ",arr[i2][j2]);
        }
        printf("\n");
        
    }
    printf("\n");
    main();
    return 0;
 }