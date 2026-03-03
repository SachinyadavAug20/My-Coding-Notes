#include <stdio.h>

typedef struct node{
    int number;
    struct node *left;
    struct node *right;
}node;

int search(node *tree,int number){
    if(tree==NULL) return 0; //gave empty tree
    else if(number < tree->number) search(tree->left,number);
    else if(number > tree->number) search(tree->right,number);
    else if(number == tree->number) return 1;
    int middle=tree->number;
    return 0;
}

int main() {
  printf("hello");

  return 0;
}
