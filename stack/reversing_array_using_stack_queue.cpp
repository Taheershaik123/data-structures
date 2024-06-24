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
        if(front == NULL){
            front = rear = n;
            return;
        }
        rear->next = n;
        rear = n;
    }
    int dequeue(){
        if(front == NULL){
            cout<<"no element"<<endl;
            return -1;

        }
        node* temp = front;
        int data = temp->data;
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
    bool empty(){
        return front == NULL;
    }
};
class stack{
    queue q1,q2;
    public:
    void push(int val){
        q2.enqueue(val);
        if(!q1.empty()){
            q2.enqueue(q1.dequeue());
            
        }
        swap(q1, q2);
    }
    void pop(){
        if(q1.empty()){
            cout<<"no element----"<<endl;
            return;
        }
         q1.dequeue();
    }
    int Top(){
        if(q1.empty()){
            cout<<"no element"<<endl;
            return -1;
        }
        return q1.frontelement();
    }
    bool isempty(){
        return q1.empty();
    }
};
void reverse_array(int arr[],int n){
    stack st;
    for(int i =0;i<n;i++){
     st.push(arr[i]);
    }
    for(int j=0;j<n;j++){
        arr[j] = st.Top();
        st.pop();
    }
}
int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    reverse_array(arr,n);
    for(int j =0 ;j<n;j++){
        cout<<arr[j]<<"->";
    }cout<<endl;
    return 0;
}