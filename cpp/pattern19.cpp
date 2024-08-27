#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    if(n<0){
        cout<<"Enter the opsitive value : "<<endl;
        return 0;
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||i==j||j==n||i+j==n+1){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}