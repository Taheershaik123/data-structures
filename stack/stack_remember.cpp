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
class stack{
    node* top;
    public:
    stack(){
        top = NULL;
    }
    void push(int val){
        node* n = new node(val);
        if(!n){
            cout<<"memory not assigned"<<endl;
            return;
        }
        n->next = top;
        top = n;
    }
    void pop(){
        node* temp = top;
        if(temp !=NULL){
            top = top->next;
            delete temp;
        }

    }
    void Top(){
        node* temp = top;
        if(temp !=NULL){
            cout<<temp->data<<endl;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
        return;
    }
   bool isempty(){
    node* temp = top;
    if(temp==NULL){
        return true;
    }
    else{
        return false;
    }
    }
};
int main(){
    stack s;
    s.push(1);
    s.Top();
}