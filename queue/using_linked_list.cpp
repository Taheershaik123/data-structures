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
    node* front;
    node* rear;
    public:
    queue(){
        front = NULL;
        rear = NULL;
    }
    void enque(int val){
        node* n = new node(val);
        if(rear == NULL){
            front = rear = n;
            return; 
        }
        rear->next = n;
        rear =n;
    }
    int dequeue(){
        if(front == NULL){
            cout<<"the queue is empty"<<endl;
            return-1;
        }
        if(front  == NULL){
            rear = NULL;
        }
        node* temp = front;
        front = front->next;
        delete temp;
    }
    int getfront(){
        if(front == NULL){
            cout<<"the queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool isempty(){
        return front==NULL;
    }
};
int main(){
    queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    cout<<"before dqueue"<<endl;
    cout<<q.getfront()<<endl;
    cout<<"after the dqueue"<<endl;
    q.dequeue();
    cout<<q.getfront();


}