#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char val){
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
    void push(char val){
        node* n = new node(val);
        if(!n){
            cout<<"Stack is over flow"<<endl;
            return;
        }
        n->next = top;
        top = n;

    }
    void pop(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        node* r = top;
        top = top->next;
        delete r;
    }
    char Top(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
        }
        return top->data;
    }
    bool isempty(){
        if(top == NULL){
            return true;
        }
       return false;
    }
};
string reverse(string s){
    stack st;
    for(char n : s){
      st.push(n);
    }
    string rev;
    while(!st.isempty()){
     rev += st.Top();
     st.pop();
    }
    return rev;
}
int main(){
    string value;
    cout<<"enter the string"<<endl;
    cin>>value;
    string out=reverse(value);
    cout<<"the reversed string is:"<<out<<endl;
}