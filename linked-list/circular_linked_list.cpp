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
         head=n;
        n->next = head;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next= head;

}
void display(node* head){
    node* temp= head;
    if(head == NULL){
        return;
    }
    while(temp->next!= head){
        cout<<temp->data<<"->";
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
    display(head);
    
}