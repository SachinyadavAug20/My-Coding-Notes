#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int)); // allocation of 5 intergers in 20 bytes
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;
        printf("%d \n", ptr[i]);
    }
    free(ptr); // freed thus now null
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", ptr[i]); // by default show garbage value/it is likly to print garbage
    }
    /*
    You are accessing memory after it has been freed, which is undefined behavior. That means:

        It may work, or
        It may crash, or
        It may show garbage, or
        It may even show correct values — anything is possible.
        This happens because:
        free() does not erase the data.
        It just marks the memory as available for reuse.
        Until reused, your old data might still be there in some parts (like the last 3 elements in your case).
        Some systems clear freed memory more aggressively than others, or reuse parts of it quickly — that's why only first few integers showed garbage.This happens because:
        free() does not erase the data.
        It just marks the memory as available for reuse.
        Until reused, your old data might still be there in some parts (like the last 3 elements in your case).
        Some systems clear freed memory more aggressively than others, or reuse parts of it quickly — that's why only first few integers showed garbage.
    */
    return 0;
}