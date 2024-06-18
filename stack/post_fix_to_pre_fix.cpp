#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    public:
    node(char val){
        data  = val;
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
            return;
        }
        n->next = top;
        top = n;
    }
    void pop(){
        if(top == NULL){
            cout<<"no elements to pop"<<endl;
            return;
        }
        node* r = top;
        top = top->next;
        delete r;
    }
        char Top(){
          if(top == NULL){
            cout<<"stack is empty "<<endl;
          }
          return top->data;
        }
        bool empty(){
            if(top == NULL){
                return true;
            }
            return false;
        }
};
string post_to_prefix(string s){
    stack st;
    string prefix;
    for(char n : s){
        if(isalpha(n)){
            st.push(n);
        }
        else{
            char a = st.Top();
            st.pop();
            char b = st.Top();
            st.pop();
            string temp = string(1,n)+b+a;
            for(int i=0;i<temp.length();i++){
                st.push(temp[i]);
            }
        }
    }
    while(!st.empty()){
        prefix += st.Top();
        st.pop();
    }
    return prefix;

}
string reverse(string s){
    string temp = post_to_prefix(s);
    string pre;
    for(int i =temp.length();i>=0;i--){
        pre += temp[i];
    }
    return pre;
}
int main(){
    string post;
    cout<<"enter the postfix_expression"<<endl;
    cin>>post;
    string out = reverse(post);
    cout<<"the prefix_expresion is ->"<<out<<endl;
}