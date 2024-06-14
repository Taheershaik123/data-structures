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
        
    }
}