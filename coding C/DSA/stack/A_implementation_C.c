#include <stdio.h>
#include <stdlib.h> //to use malloc
typedef struct stack
{
    int size;
    int top;
    int *array;
} stack;
int isempty(stack *ptr);
int isfull(stack *ptr);
void push(stack *ptr, int element);
int pop(stack *ptr);
void pop_all_element(stack *p);
int peak_stack(stack *, int);
int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 10;
    s->top = -1;
    s->array = (int *)malloc(s->size * sizeof(int));

    // initialization
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60);
    push(s, 70);
    push(s, 80);
    pop(s);
    push(s, 50);
    for (int j = 1; j <= s->top+1; j++)
    {
        printf("the value at position at %d is %d \n",j, peak_stack(s, j));
    }
    printf("the value at position at %d is %d \n",5, peak_stack(s, 5));
    pop_all_element(s);

    return 0;
}
void pop_all_element(stack *p)
{
    for (int i = 0; isempty(p) == 0; i++)
    {
        printf("%d ", pop(p));
    }
    printf("\n");
}
int pop(stack *ptr)
{
    if (isempty(ptr))
    {
        printf("stack underflow\n");
        return -1; // signify false
    }
    else
    {
        return ptr->array[ptr->top--];
    }
}
void push(stack *ptr, int element)
{
    if (isfull(ptr))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->array[++ptr->top] = element;
    }
}
int isempty(stack *ptr)
{
    return ptr->top < 0 ? 1 : 0;
}
int isfull(stack *ptr)
{
    return ptr->top >= (ptr->size - 1) ? 1 : 0;
}
int peak_stack(stack *p, int index)
{
    return p->top - index + 1 < 0 ? printf("the element doesn't exists\n")-28 : p->array[p->top - index + 1];
}
