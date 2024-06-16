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
        head = n ;
        n->next = head;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(node* head){
    node* temp = head;
    if(head == NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}
void deletion(node* &head,int val){
    node* temp = head;
    if(head == NULL){
        cout<<"tere is no possible to delete element in the empty list"<<endl;
        return;
    }
    while(temp->next->data!= val && temp->next!= head){
        temp=temp->next;
    }
    node* r = temp->next;
    temp->next =   temp->next->next;
    delete r;
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
    deletion(head,5);
    display(head);

}