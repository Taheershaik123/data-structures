#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n value"<<endl;
    cin>>n;
    int arr[n];
    for(int j=n;j>0;j--){
        for(int s=1;s<=j;s++){
            if(s<j){
                cout<<0;
            }
            else{
                cout<<n;
                n--;
            }
        }        
        cout<<endl;
    }
}