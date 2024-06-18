#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char val){
        data= val;
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
            cout<<"over flow"<<endl;
            return;
        }
        n->next = top;
        top = n;

    }
    void pop(){
        if(top == NULL){
            cout<<"stake is empty"<<endl;
            return;
        }
        node* r = top;
        top = top->next;
        delete r;
    }
    char Top(){
        if(top == NULL){
           cout<<"the stack is empty:"<<endl;

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
bool paranthesis(string& s){
    stack st;
    for(char r : s){
        if(r == '{'){
            st.push(r);
        }
        else if(r=='}'){
            if(st.isempty()){
                return false;
            }
            st.pop();
        }
    }
    return st.isempty();
}
int main(){
    string s;
    cout<<"enter the { }"<<endl;
    cin>>s;
    if(!paranthesis(s)){
        cout<<"Not matched"<<endl;
    }
    else{
        cout<<"matched";
    }
}