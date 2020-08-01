#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node* newNode(int data){
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    return temp;
}
Node* insertBegin(Node *head,int data){
    if(head==NULL){
        return newNode(data);
    }else{
        head->next=insertBegin(head->next,data);
    }
    return head;
}
void AlternateNode(Node *head,bool cou=true){
    if(head==NULL){
        return;
    }
    if(cou==true)
        cout<<head->data<<" ";
    AlternateNode(head->next,!cou);
}
void Traversal(Node *head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    Traversal(head->next);
}
int main(){
    Node *head=NULL;
    head=insertBegin(head,2);
    head=insertBegin(head,3);
    head=insertBegin(head,4);
    head=insertBegin(head,5);
    head=insertBegin(head,6);
    head=insertBegin(head,7);
    Traversal(head);
    cout<<"\nAlternate Node\n";
    AlternateNode(head);
}