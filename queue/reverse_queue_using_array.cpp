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
    void enqueue(int val){
        node* n = new node(val);
        if(rear == NULL){
            front=rear=n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    int dequeue(){
        if(front == NULL ){
            cout<<"no element"<<endl;
            return-1;
        }
        node* temp = front;
        int data = temp->data;
        front= front->next;
        if(front == NULL){
            rear=NULL;
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
void reverse(int arr[],int n){
    queue q;
    int r = n-1;
    for(int i=0;i<n;i++){
      q.enqueue(arr[r]);
      r--;
    }
    for(int j =0;j<n;j++){
        arr[j] = q.dequeue();
    }
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";
    }

   
}