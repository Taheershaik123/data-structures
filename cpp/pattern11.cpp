#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of n"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}