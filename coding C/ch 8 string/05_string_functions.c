#include <stdio.h>
#include <string.h>

int main()
{
    char name[100] = "sachin ";
    char father_name[] = "sureshchandra yadav"; // given spaces at end so looks good when added
    char surname[] = "yadav ";
    printf("the length of string name(%s) is %d\n", name, strlen(name));
    char candidate_name[50];
    // as name is same as candidate name so copy name to candidate name
    strcpy(candidate_name, name);
    printf("the candidate name is %s\n", candidate_name);
    // need full name to be stored in name so
    strcat(name, father_name);
    printf("full name :%s\n", name);

    printf("%d",strcmp(name,father_name));  //sachin>suresh yadav --by ASCII vlue thus -ve answer

    return 0;
}