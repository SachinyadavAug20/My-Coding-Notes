#include <stdio.h>
#include <stdlib.h>
typedef struct myCUSTOMarray // only information
{
    int total_size, used_size;
    int *base_address;

} myarray;
void makearray(myarray *a, int tsize, int usize);
void makearray(myarray *a, int tsize, int usize)
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).base_address=(int*)malloc(tsize*sizeof(int));//taking memory from heap
    // OR WAY
    a->total_size = tsize;
    a->used_size = usize;
    a->base_address = (int *)malloc(tsize * sizeof(int)); // taking memory from heap, as if made an array here it will be erased as function stops excuting
}
void show(myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->base_address)[i]);// will print all used elements
    }
    
}
void set_value(myarray* a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("give %dth students marks :",i+1);
        scanf("%d",&(a->base_address)[i]);
    }
    
}
int main()
{
    myarray marks;
    makearray(&marks, 10, 2);
    printf("we are running set_value now\n");
    set_value(&marks);
    printf("we are running show now\n");
    show(&marks);//if no value assigned thus gives garbage value
    return 0;
}