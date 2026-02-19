#include <iostream>
struct node
{
    int data;
    node *next;
};
void print_int_linkedlist(node *start)
{
    for (node *ptr = start; ptr != NULL; ptr = ptr->next)
    {
        std::cout << ptr->data << " ";
    }
    std::cout << "\n";
}
node *delet_at_begin(node *head)
{
    node *p = head->next;
    delete head; // free the memory
    return p;
}
node *delete_at_index(node *head, int index) // no working
{
    node *p = head;
    node *q = head->next; // reach q which to delete
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    delete q;
    return head;
}
node *delete_last(node *head)
{
    node *p = head;
    node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    // q.next make null
    delete q;
    p->next=NULL;
    return head;
}
node *delete_first_node_of_given_value(node *head, int value)
{
    node*p=head;
    node*q=head->next;
    while (q->data!=value&&q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;   
        delete q;
    }
    else if(q->data!=value)
    {
        std::cout<<value<<" is not present in the node"<<'\n';  
    }
    return head;
}
int main()
{
    // decleration of three node linked list
    node *head = new node;
    node *first = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;
    head->data = 2;
    head->next = first;
    first->data = 7;
    first->next = second;
    second->data = 13;
    second->next = third;
    third->data = 69;
    third->next = fourth;
    fourth->data = 207;
    fourth->next = fifth;
    fifth->data = 17;
    fifth->next = NULL;
    // operations on linked list
    print_int_linkedlist(head);

    head = delete_first_node_of_given_value(head,70);
    head = delete_first_node_of_given_value(head,69);
    print_int_linkedlist(head);

    head = delet_at_begin(head);
    print_int_linkedlist(head);

    head = delete_at_index(head, 2);
    print_int_linkedlist(head);

    head = delete_last(head);
    print_int_linkedlist(head);

    return 0;
}