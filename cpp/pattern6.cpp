#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for(int i=n ; i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for( int i=2;i<=n;i++){
        for(int j=1;j<=i;j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}