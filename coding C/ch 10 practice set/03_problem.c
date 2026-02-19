#include<stdio.h>

int main(){
    FILE* source_ptr=fopen("source.txt","r");
    FILE* target_ptr=fopen("target.txt","w");
    char character_source;
    char character_target;
    while (1)
    {
        character_source=fgetc(source_ptr);
        if(character_source==EOF)
        {
            break;
        }
        // fscanf(source_ptr,"%c",character_source);        reason:fget and fput used not %c , %c work only in printf not scanf
        fprintf(target_ptr,"%c",character_source);
        fputc(character_source,target_ptr);
        // fputc(character_source,target_ptr);
    }
    fputc('\n',target_ptr);

    //works onces
    fclose(source_ptr);
    fclose(target_ptr);
    
    return 0;
}