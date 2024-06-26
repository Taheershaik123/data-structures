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
        n->next = head;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp =  temp->next;
    }
    temp->next = n ;
    n->next = head;
}
void display(node*  head){
    node* temp = head;
    if(head == NULL){
        cout<<"the list is empty"<<endl;
        return;
    }
    do{
        cout<<temp->data<<"->";
        temp = temp->next;
    }while(temp != head);
    cout<<endl;
}
void find(node* &head,int val){
    node* temp = head;
    if(head == NULL){
        cout<<"the list is empty"<<endl;
        return;

    }
    while(temp->next->data!= val &&  temp->next!= head){
        temp = temp->next;
    }
    cout<<temp->next->data<<"<-"<<"element is present in linked list"<<endl;

}
int main(){
    node* head =NULL;
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
    find(head,8);
}
