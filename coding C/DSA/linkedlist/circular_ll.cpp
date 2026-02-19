#include <iostream>
template <typename T>
struct node
{
    T data;
    node *next;
};
void print_nodes(node<int> *start)
{
    node<int> *p = start;
    do
    {
        std::cout << p->data << " ";
        p = p->next;
    } while (p != start);

    printf("\ncompleted printing!!\n\n");
}
node<int> *search_node_by_value(node<int> *start, int eleement_to_search)
{
    node<int> *p = start;
    do
    {
        if (p->data == eleement_to_search)
        {
            return p;
        }
        p = p->next;
    } while (p != start);
    return 0;
}
node<int> *delete_node(node<int> *start, int index_of_delete)
{
    node<int> *p = start;
    node<int> *q = start->next;
    for (int i = 0; i < index_of_delete - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    // q is the node of insertion
    p->next = q->next;
    delete q;
    return start;
}
node<int> *insert_node(node<int> *start, int index_of_insert, int elmenet)
{
    node<int> *p = start;
    node<int> *q = start->next;
    for (int i = 0; i < index_of_insert - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    // q is the node of insertion
    node<int> *new_node = new node<int>;
    p->next = new_node;
    new_node->data = elmenet;
    new_node->next = q;
    return start;
}
node<int> *insert_at_end(node<int> *start, int data)
{
   node<int>* ptr = new node<int>;
    ptr->data=data;
    
    node<int>* p=start->next;
    while (p->next!=start)
    {
        p=p->next;
    }
    //p is last node
    p->next=ptr;
    ptr->next=start;
    
    return start;
}
int main()
{
    int n = 70;
    // declare nodes
    node<int> *head = new node<int>;
    node<int> *second = new node<int>;
    node<int> *third = new node<int>;
    node<int> *fourth = new node<int>;

    // assign nodes
    head->data = 3;
    head->next = second;
    second->data = 5;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 11;
    fourth->next = head; // this loops thus circular
    // head = insert_node(head, 4, 13);
    head = insert_at_end(head, 69);
    head = insert_at_end(head, 70);
    head = insert_at_end(head, 71);
    head = insert_at_end(head, 72);
    head = insert_at_end(head, 73);
    // operation
    print_nodes(head);
    std::cout << "the address of " << n << " in list is " << search_node_by_value(head, n) << " -> " << (search_node_by_value(head, 7))->data << "\n\n";

    head = delete_node(head, 2);
    print_nodes(head);

    head = insert_node(head, 2, 78);
    print_nodes(head);
    return 0;
}