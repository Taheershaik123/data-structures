#include<iostream>
using namespace std;
#define n 10
class stack{
    int* arr;
    int top;
    public:
    stack(){
         arr = new int[n];
         top = -1;

    }
    void push(int val){
        if(top == n-1){
            cout<<"stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void Top(){
        if(top == -1){
            cout<<"there to element is the stack"<<endl;
            return;
        }
        cout<<arr[top]<<endl;
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
    st.push(8);
    st.push(9);
    st.push(10);
    st.push(11);
    st.Top();


}