#include<stdio.h>
#include<string.h>

int main(){
    char st1[7];
    char st2[7];
    for (int i = 0; i < 6; i++)
    {
        printf("enter the string :");
        scanf("%c",&st1[i]);
        fflush(stdin);
    }
    st1[6]='\0';
    
    printf("Enter the string :");
    scanf("%s",st2);
    printf("\nthe strings are %d\n",strcmp(st1,st2));
    main();
    return 0;
}