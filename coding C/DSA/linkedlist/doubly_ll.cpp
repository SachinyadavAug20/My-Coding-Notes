#include<iostream>
struct node
{
    node* previous;
    int data;
    node* next;
};
void print_all_nodes(node* head)
{
    node*p=head;
    for (node* i = head; i!=NULL; i=i->next)
    {
        std::cout<<i->data<<' ';
        
    }
    std::cout<<"\n";
}
void prind_both_ways(node*head)
{
    node*p=head;
    std::cout<<p->data<<" ";
    do
    {
        p=p->next;
        std::cout<<p->data<<" ";
    } while (p->next!=NULL);
    std::cout<<"\n";
    do
    {
        std::cout<<p->data<<" ";
        p=p->previous;
    } while (p!=NULL);
    
    std::cout<<"\n";
    
}

int main(){
    //declaration
    node* head=new node;
    node* second=new node;
    node* third=new node;
    node* fourth=new node;
    //initialization
    head->previous=NULL;
    head->data=5;
    head->next=second;
    second->previous=head;
    second->data=7;
    second->next=third;
    third->previous=second;
    third->data=9;
    third->next=fourth;
    fourth->previous=third;
    fourth->data=13;
    fourth->next=NULL;
    //operation
    prind_both_ways(head);

    return 0;
}