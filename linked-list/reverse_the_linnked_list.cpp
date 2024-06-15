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
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next= NULL;
}
void reverse(node* &head){
    if(head == NULL){
        cout<<"list id empty"<<endl;
        return;
    }
    node* current = head;
    node* prv = NULL;
    while(current != NULL){
        node* nextnode = current->next;
        current->next = prv;
        prv = current;
        current = nextnode;
    }
    head = prv;
}
void display(node* head){
    if(head == NULL){
        cout<<"the list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
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
    insertion(head,8);
    display(head);
    reverse(head);
    display(head);
}