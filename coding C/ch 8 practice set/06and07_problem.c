#include<stdio.h>
#include<string.h>
void encrypt(char[]);
void decrypt(char[]);
void encrypt(char secret[])
{
    int n;
    for (int i = 0; i < strlen(secret); i++)  //not +1 as don't change null character
    {
        n=(int)secret[i]; //OR secret[i]=secret[i]+1;
        n++;
        secret[i]=(char)n;
    }
    
}

void decrypt(char secret[])
{
    int n;
    for (int i = 0; i < strlen(secret); i++)  //not +1 as don't change null character
    {
        secret[i]=secret[i]-1;// OR n=(int)secret[i];
        // n--;
        // secret[i]=(char)n;
    }
    
}

int main(){
    char password[20]="ooohhsachin@07";
    printf("%s\n",password);
    encrypt(password);
    printf("%s\n",password);
    decrypt(password);
    printf("%s\n",password);
    
    return 0;
}