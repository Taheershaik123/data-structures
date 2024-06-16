#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev =NULL;
    }
};
void insertion(node* &head,int val){
      node* n = new node(val);
      if(head == NULL){
        head = n;
        n->next = NULL;
        n->prev = NULL;
      }
      node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = n;
      n->prev = temp;
      n->next =NULL;
}
void deletion(node* &head,int val){
    node* temp = head;
    if(head == NULL){
        cout<<"no element "<<endl;
        return;
    }
      while(temp->next->data != val && temp->next !=NULL){
        temp = temp->next;
      }
      node* r = temp->next;
      temp->next = temp->next->next;
      temp->next->next->prev = temp;
      delete r;
}
void display(node* head){
    node* temp = head;
    if(head == NULL){
        cout<<"no element"<<endl;
        return;
    }
    while(temp != NULL){
        cout<<temp->data<<"<-->";
        temp = temp->next;
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
    display(head);
    deletion(head,6);
    display(head);
    
}