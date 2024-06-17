#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next =NULL;
        prev = NULL;
    }
};
void insertion(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        n->next =NULL;
        n->prev = NULL;
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
    if(head ==  NULL){
        cout<<"no element"<<endl;
        return;
    }
    node* temp =  head;
    while(temp != NULL){
        cout<<temp->data<<"<-->";
        temp = temp->next;
    }cout<<endl;
}
void marging(node* &head1,node* &head2){
    if(head1 == NULL&& head2 == NULL){
        cout<<"no elements to marge"<<endl;
        return;
    }
    node* temp1 = head1;
    node* temp2 = head2;
    while(temp1->next!=NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp2;
    temp2->prev = temp1;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertion(head1,1);
    insertion(head1,2);
    insertion(head1,3);
    insertion(head1,4);
    insertion(head1,5);
    insertion(head1,6);
    insertion(head2,7);
    insertion(head2,8);
    insertion(head2,9);
    insertion(head2,10);
    insertion(head2,11);
    display(head1);
    display(head2);
    marging(head1,head2);
    display(head1);
}