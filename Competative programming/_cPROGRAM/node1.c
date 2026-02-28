#include <stdio.h>
#include <stdlib.h>
typedef struct node { // need to use it as next so need declaration
  int number;
  struct node *next; // pointers to next node
} node;

int main(int argc, char *argv[]) {
  node *list = NULL;
  for (int i = 1; i < argc; i++) {
    int number = atoi(argv[i]);
    node *n = malloc(sizeof(node));
    if (n == NULL) {
      return 1;
    }
    n->number = number;
    n->next = NULL; // pre-append to list
    n->next = list;
    list = n;
  }
  // print the nodes
  for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
    printf("%d ", ptr->number);
  }
    printf("\n");

    // free up memory
    node *ptr=list;
    while (list!=NULL) {
        node*tmp=ptr;
        ptr=ptr->next;
        free(tmp);
    }
}
