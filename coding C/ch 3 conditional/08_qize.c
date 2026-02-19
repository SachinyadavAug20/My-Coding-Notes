#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("enter your marks :");
    scanf("%d", &marks);
    if (marks >= 90 && marks < 100)
    {
        printf("your grade is A");
        grade = 'A';
    }
   else if (marks >= 80 && marks < 90)
    {
        printf("your grade is B");
        grade = 'B';
    }
   else if (marks >= 70 && marks < 80)
    {
        printf("your grade is C");
        grade = 'C';
    }
   else if (marks >= 60 && marks < 70)
    {
        printf("your grade is D");
        grade = 'D';
    }
   else if (marks >= 50 && marks < 60)
    {
        printf("your grade is E");
        grade = 'E';
    }
   else if (marks < 50)
    {
        printf("your grade is F");
        grade = 'F';
    }
    else
    {
        printf("Invalid input");
        grade='Z';
    }
    
    printf("\nyour final garde is %c",grade);
     scanf("%d", &marks);// to pause excution
    return 0;
}