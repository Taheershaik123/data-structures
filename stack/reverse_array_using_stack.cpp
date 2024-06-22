#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next ;
    node(int val){
        data =  val;
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
        node* n = new node(val){
            if(!n){
                cout<<"memory is not assigned "<<endl;
                return;
            }
            n->next = top;
            top = n;
        }
        
    }
}