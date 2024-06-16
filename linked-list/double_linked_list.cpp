#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data   = val;
        next = NULL;
        prev = NULL;
    }

};
void insertion(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        n->prev = NULL;
        n->next = NULL;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    n->prev = temp;
}
void display(node* head){
    node* temp = head;
    if(head == NULL){
        cout<<"no elements"<<endl;
        return;
    }
    while(temp!=NULL){
        cout<<temp->data<<"<-->";
        temp= temp->next;
    }cout<<endl;
}
int main(){
     node* head = NULL;
     insertion(head,1);
     insertion(head,2);
     insertion(head,3);
     insertion(head,4);
     insertion(head,5);
     insertion(head,6);
     insertion(head,7);
     insertion(head,8);
     insertion(head,9);
     insertion(head,10);
     insertion(head,11);
     display(head);
    
}