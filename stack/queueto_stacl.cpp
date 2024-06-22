#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data  = val;
        next = NULL;
    }
};
class queue{
    node* front;
    node*rear;
    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enque(int val){
        node* n = new node(val);
        if(front == NULL){
            front = rear = n;
            return;
        }
        rear->next = n;
        rear = n;

    }
    int dequeue(){
        if(rear == NULL){
            front =NULL;
        }
        node* temp = front;
        int data  = temp->data;
        front = front->next;
        delete temp;
        return data;
    }
    int frontelement(){
        if(front == NULL){
            cout<<"no element"<<endl;
        }
        return front->data;
    }
    bool is_empty(){
        return front== NULL;
    }
};
class stack{
    queue q1,q2;
    public:
    void push(int val){
        q2.enque(val);
        while(!q1.is_empty()){
            q2.enque(q1.dequeue());

        }
        swap(q1, q2);

    }
    void pop(){
        if(q1.is_empty()){
            cout<<"no element"<<endl;
            return;
        }
        q1.dequeue();
    }
    int Top(){
        if(q1.is_empty()){
            cout<<"no element"<<endl;
        }
        return q1.frontelement();
    }
    bool empty(){
        return q1.is_empty();
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
    cout<<"before the deletion "<<st.Top()<<endl;
    st.pop();
    cout<<"after the deletion "<<st.Top()<<endl;
}