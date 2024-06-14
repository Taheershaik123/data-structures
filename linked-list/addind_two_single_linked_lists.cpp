#include<iostream>
using namespace std;
class node{
    public:
    int data ;
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
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void display(node* head){
    if(head == NULL){
        cout<<"the lined list is empty"<<endl;
        return;
    }
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }cout<<endl;
}
void adding_two_linkead_lists(node* &head1,node* &head2){
    node*  temp1 = head1;
    node*  temp2 = head2;
    while(temp1->next!= NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp2;

}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertion(head1,1);
    insertion(head1,2);
    insertion(head1,3);
    insertion(head1,4);
    insertion(head1,5);
    insertion(head2,6);
    insertion(head2,7);
    insertion(head2,8);
    insertion(head2,9);
    insertion(head2,10);
    cout<<"The first linked list"<<endl;
    display(head1);
    cout<<"The second linked list"<<endl;
    display(head2);
    cout<<"The combined linked list "<<endl;
    adding_two_linkead_lists(head1,head2);
    display(head1);


}