#include <iostream>
struct Node
{
    int data;
    Node *next;
};
void print_int_linkedlist(Node *start)
{
    for (Node *ptr = start; ptr != NULL; ptr = ptr->next)
    {
        std::cout << ptr->data << " ";
    }
    std::cout << "\n";
}
void Insert_in_node_by_me(Node *start, int element, int at_which_to_insert)
{
    if (at_which_to_insert == 1)
    {
        Node *n = new Node;
        Node *temp = start;
        start = n;
        n->data = element;
        n->next = temp;
    }
    else
    {
        Node *ptr = start;
        for (int i = 0; i < at_which_to_insert - 2; i++)
        {
            ptr = ptr->next;
        }
        // make new node
        Node *x = new Node;
        Node *temp = ptr->next;
        ptr->next = x;
        x->data = element;
        x->next = temp;
    }
}
Node *Insert_at_begin(Node *head, int element)
{
    Node *ptr = new Node;
    ptr->data = element;
    ptr->next = head;
    return ptr;
}
void Insert_in_btw(Node *head, int index, int element) // index==0
{
    if (index == 0)
    {
        Insert_at_begin(head, element);
    }
    else
    {
        Node *p = head;
        for (int i = 0; i != index - 1; i++)
        {
            p = p->next;
        }
        Node *n = new Node;
        n->data = element;
        n->next = p->next;
        p->next = n;
    }
}
Node* Insert_at_end(Node* head,int element)
{
    Node* p=head;
    for (int i = 0; p->next!=NULL; i++)
    {
        p=p->next;
    }
   Node* n=new Node;
   n->data=element;

   p->next=n;
   n->next=NULL;
    
}
void insert_after_ptr(Node* head,Node* previous_node,int element)
{
    Node* n=new Node;
    n->data=element;

    n->next=previous_node->next;
    previous_node->next=n;
}
int main()
{
    // decleration of three node linked list
    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    head->data = 2;
    head->next = first;
    first->data = 7;
    first->next = second;
    second->data = 13;
    second->next = third;
    third->data = 17;
    third->next = NULL;
    // operations on linked list
    print_int_linkedlist(head);
    insert_after_ptr(head,second,192);
    print_int_linkedlist(head);
    head = Insert_at_begin(head, 71);
    print_int_linkedlist(head);
    Insert_in_btw(head, 2, 90);
    print_int_linkedlist(head);
    Insert_at_end(head,99);
    print_int_linkedlist(head);

    return 0;
}