#include<iostream>
using namespace std;
#define n 10
int queue[n];
int front = -1;
int rear = -1;
void enque(int data){
    if(rear == n-1){
        cout<<"the queue is full"<<endl;
        return;
    }
    if(front == -1){
        front = 0;
    }
    rear++;
    queue[rear] =  data;
}
int dequeue(){
    if(front == -1 || front > rear){
        cout<<"queue is empty"<<endl;
        return -1;

    }
     int temp=queue[front];
    front++;
    return temp;
}
int main(){
    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    enque(6);
    enque(7);
    cout<<dequeue();
    cout<<dequeue();
    cout<<dequeue();
    cout<<dequeue();
    cout<<dequeue();

    
}