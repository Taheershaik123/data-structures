#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertion(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head= n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void deletion_nth_node(node* &head,int val){
    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    node* r = temp->next;
    if(temp->next->next!=NULL){
    temp->next = temp->next->next;
    delete  r;
    }  
    else{
        temp->next = NULL;
    }
}
void linked_list_to_circular(node* &head){
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = head;
}
void search(node* head,int val){
    int i=0;
    node* temp = head;
    while(temp!=NULL && temp->data!=val){
        temp = temp->next;
        ++i;
    }
    cout<<temp->data<<" The postion is "<<i;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=NULL && temp!=head);
    cout<<endl;
}
int main(){
    node* head =NULL;
    insertion(head,10);
    insertion(head,11);
    insertion(head,12);
    insertion(head,13);
    insertion(head,14);
    insertion(head,15);
    display(head);
    deletion_nth_node(head,15);
    display(head);
    linked_list_to_circular(head);
    display(head);
    search(head,14);
    
}