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
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void display(node* head){
    if(head == NULL){
        cout<<"the list is empt"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<"->";
        temp= temp->next;
    }cout<<endl;

}
void rotate(node* &head,int val){
    if(head == NULL || val == 0){
        cout<<"empty list"<<endl;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = head;
    int starting = val;
    for(int i=1;i<starting;i++){
        temp = temp->next; 
    }
    head = temp->next;
    temp->next = NULL;

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
    display(head);
    rotate(head,2);
    display(head);

}