#include <stdio.h>
#include <stdlib.h>
typedef struct node { // need to use it as next so need declaration
  int number;
  struct node *next; // pointers to next node
} node;

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("in %s, Need at least 2 cmd arguments\n", argv[0]);
    return 1;
  }
  node *list = NULL; // starts and initially empty(NULL)
  node *n1 = malloc(sizeof(node));
  if (n1 == NULL) {
    return 1;
  }
  list = n1;
  n1->number = (int)*argv[1] - '0';
  node *n2 = malloc(sizeof(node));
  if (n2 == NULL) {
    return 1;
  }
  n1->next = n2;
  n2->number = (int)*argv[2] - '0';
  n2->next = NULL;
  // print nodes
  for (node *ptr = list; ptr != NULL;) {
    printf("%d ", ptr->number);
    ptr = ptr->next;
  }
  printf("\n");
  free(n1);
  free(n2);
  return 0;
}
