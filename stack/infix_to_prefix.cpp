#include<string>
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
            cout<<"memory is  not   allocated thhere is an issue"<<endl;
            return;
        }
        n->next = top;
        top = n;
    }
    void pop(){
        node* temp = top;
        if(top == NULL){
            cout<<"stack is under flow"<<endl;
            return;
        }
        top = top->next;
        delete temp;
    }
    char Top(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
        }
        return top->data;
    }
    bool isempty(){
        if(top ==  NULL){
            return true ;
        }
        return false;
    }
};
string infix_to_pre(string s){
    stack st;
    string prefix;
    for(char n : s){
        if(isalpha(n)){
            st.push(n);
        }
        else{
            char a = st.Top();
            st.pop();
           string  temp = string(1,n)+a;
           for(int i=0;i<temp.length();i++){
            st.push(temp[i]);
           }
        }
    }
    while(!st.isempty()){
        prefix += st.Top();
        st.pop();
    }
    return prefix;
}
string reverse(string pre){
    string temp ;
     string pree = infix_to_pre(pre);
    for(int i = pree.length();i>=0;i--){
        temp += pree[i];
    }
    return temp;
}
int main(){
    string infix;
    cout<<"enter the infix expression"<<endl;
    cin>>infix;
    string out = reverse(infix);
    cout<<"the prefix_expression is ->"<<out<<endl;
}