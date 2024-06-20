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
            cout<<"memory is not assigned"<<endl;
           // return;
        }
        n->next = top;
        top = n;

    }
    void pop(){
        if(top == NULL){
            cout<<"no element to pop"<<endl;
            return;
        }
        node* temp = top;
        top = top->next;
        delete temp;
    }
    char Top(){
        if(top == NULL){
            cout<<"no elements"<<endl;
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
string infix_to_post(string s){
    stack st;
    for(char n : s){
        if(isalpha(n)){
            st.push(n);
        }
        else{
            char a = st.Top();
            st.pop();
            string temp = string(1,n)+a;
            for(int i = 0;i<temp.length();i++){
             st.push(temp[i]);
            }
        }
    }
    string out;
    while(!st.isempty()){
         out  += st.Top();
         st.pop();
    }
    return out;
}
int main(){
    string exp;
    cout<<"enter the string"<<endl;
    cin>>exp;
    string ou = infix_to_post(exp);
    cout<<"the expression is ->"<<ou<<endl;
}