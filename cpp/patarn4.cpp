#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the value of the n"<<endl;
    cin>>n;
    int stop = n/2;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
          if(i==0||i==n||j==0||j==n){
            cout<<"0";
          }
          else{
            cout<<" ";
          }
        }


        cout<<endl;
    }
}
