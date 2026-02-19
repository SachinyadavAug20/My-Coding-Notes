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
    std::cout<<"\n";
}
node<int> *inssert_at_begin(node<int>* start, int data)
{
    node<int>* ptr = new node<int>;
    ptr->data=data;
    
    node<int>* p=start->next;
    while (p->next!=start)
    {
        p=p->next;
    }
    //p is last node of this circular node
    p->next=ptr;
    ptr->next=start;
    start=ptr;
   
    return start;
}
int main()
{
    int n = 7;
    // declare nodes
    node<int> *head = new node<int>;
    node<int> *second = new node<int>;
    node<int> *third = new node<int>;
    node<int> *fourth = new node<int>;
    // assign nodes
    head->data = 4;
    head->next = second;
    second->data = 3;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = head; // this loops thus circular

    print_nodes(head);

    head=inssert_at_begin(head,99);
    print_nodes(head);
    head=inssert_at_begin(head,100);
    print_nodes(head);
    head=inssert_at_begin(head,101);
    print_nodes(head);
    head=inssert_at_begin(head,102);
    print_nodes(head);

    return 0;
}