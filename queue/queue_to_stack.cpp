#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next  = NULL;
    }
};
class queue{
    node* front;
    node* rear;
    public:
    queue(){
        front= NULL;
        rear = NULL;
    }
    void enqueu(int val){
        node* n = new node(val);
        if(rear == NULL){
            front =rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    int dqueue(){
        if(front == NULL){
            cout<<"the queue is empty"<<endl;
            return-1;

        }
        node* temp =  front;
        int  data = temp->data;
        front   = front->next;
        if(front == NULL){
            rear = NULL;
        }
        delete temp;
        return data;

    }
    int frontelement(){
        if(front ==  NULL){
            cout<<"no  element"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isempty(){
        return front==NULL;
    }


};
class stack{
    queue q1,q2;
    public:
    void push(int val){
        q2.enqueu(val);
        while(!q1.isempty()){
            q2.enqueu(q1.dqueue());
        }
        swap(q1,q2);
    }
    int pop(){
        if(q1.isempty()){
            cout<<"no element"<<endl;
            return -1;
        }
        return q1.dqueue();

    }
    int Top(){
        if(q1.isempty()){
            cout<<"is empty"<<endl;
            return -1;
        }
        return q1.frontelement();
    }
    bool emppty(){
       return q1.isempty();
    }

};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    cout<<st.Top()<<endl;
}