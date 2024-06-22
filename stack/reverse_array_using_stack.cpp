#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next ;
    node(int val){
        data =  val;
        next = NULL;
    }
};
class stack{
    node* top;
    public:
    stack(){
        top = NULL;
    }
    void push(int val){
        node* n = new node(val);
            if(!n){
                cout<<"memory is not assigned "<<endl;
                return;
            }
            n->next = top;
            top = n;
        }
    
    void pop(){
        if(top == NULL){
            cout<<"no element"<<endl;
            return;
        }
        node* r = top;
        top = top->next;
        delete r;
    }
    int Top(){
        if(top == NULL){
            cout<<"the stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool is_empty(){
        return top == NULL;
    }
};
void reverse( int arr[],int n){
    stack s;
    for(int i =0;i<n;i++){
       s.push(arr[i]);
    }
    for(int j=0;j<n;j++){
        arr[j]= s.Top();
        s.pop();
    }
}
int main(){
    stack st;
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the integer element of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
    cout<<"brfore reverseing "<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<"->";
    }cout<<endl;
    reverse(arr,n);
    cout<<"The reversed array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";
    }
}