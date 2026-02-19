#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
void Linklist_traversal(Node *ptr)
{
    for (Node *travse = ptr; travse != NULL; travse = travse->next) // 3 nodes
    {
        printf("%d ", travse->data);
    }
}
int main()
{
    // allocate memory in heap
    Node *head = (Node *)malloc(1 * sizeof(Node));
    Node *secondNode = (Node *)malloc(1 * sizeof(Node));
    Node *thirdNode = (Node *)malloc(1 * sizeof(Node));
    Node *fourthNode = (Node *)malloc(1 * sizeof(Node));
    // link first and second
    head->data = 3;
    head->next = secondNode;
    // link second to third
    secondNode->data = 11;
    secondNode->next = thirdNode;
    // link third to fourth
    thirdNode->data = 15;
    thirdNode->next = fourthNode;
    // link fourth to null terminate
    fourthNode->data = 34;
    fourthNode->next = NULL;
    // traversal
    Linklist_traversal(head);
    printf("\n");
    Linklist_traversal(secondNode);//start traversal at second

    return 0;
}