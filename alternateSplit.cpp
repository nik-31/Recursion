#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void push(Node **head,int new_data){
    Node *temp=new Node();
    temp->data=new_data;
    temp->next=(*head);
    (*head)=temp;
}
void move(Node *a,Node *b){
    if(a==NULL || b==NULL)
        return;
    if(a->next!=NULL)
        a->next=a->next->next;
    if(b->next!=NULL)
        b->next=b->next->next;
    move(a->next,b->next);
}
void split(Node *head,Node **a_ref,Node **b_ref){
    Node *curr=head;
    *a_ref=curr;
    *b_ref=curr->next;
    move(*a_ref,*b_ref);
}
void display(Node *head){
    if(head==NULL)
        return;
    
    display(head->next);
    cout<<head->data<<" ";
}
int main(){
    Node *head=NULL;
    Node *a=NULL,*b=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);
    push(&head,6);
    push(&head,7);
    split(head,&a,&b);
    cout<<"A:  ";
    display(a);
    cout<<"\nB:  ";
    display(b);
}