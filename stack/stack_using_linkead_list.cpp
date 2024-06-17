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
            cout<<"stack overflow"<<endl;
            return;
        }
         n->next = top;
         top =n; 
    }
    void pop(){
        if(top == NULL){
            cout<<"no element"<<endl;
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
    }

    void Top(){
        if(top == NULL){
            cout<<"no elements"<<endl;
            return;
        }
        cout<<top->data;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.pop();
    st.push(3);
    st.Top();
}