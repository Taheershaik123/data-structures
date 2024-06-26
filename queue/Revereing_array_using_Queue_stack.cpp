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
class queue{
    public:
    node* front;
    node* rear;
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enqueue(int val){
        node* n = new node(val);
        if(rear == NULL){
            front = rear = n;
            return;
        }
        rear->next=n;
        rear = n;
    }
    int dequeue(){
        if(front == NULL){
            cout<<"no element"<<endl;
            return-1;
        }
        node* temp = front;
        int data = front->data;
        front = front->next;
        if(front == NULL){
             rear = NULL;
        }
        delete temp;
        return data;
    }
    int frontelement(){
        if(front == NULL){
            cout<<"no element"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isempty(){
        return front == NULL;
    }
};
class stack{
    public:
    queue q1,q2;
    void push(int val){
        q2.enqueue(val);
        while(!q1.isempty()){
            q2.enqueue(q1.dequeue());

        }
        swap(q1,q2);
    }
    void pop(){
        if(q1.isempty()){
            cout<<"no element"<<endl;
            return;
        }
        q1.dequeue();
    }
    int Top(){
        if(q1.isempty()){
            cout<<"no element"<<endl;
            return-1;
        }
        return q1.frontelement();
    }
    bool empty(){
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
    cout<<"first"<<st.Top();
    st.pop();

    cout<<st.Top();
    return 0;
}