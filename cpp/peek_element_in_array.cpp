#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    if(n==0 || n==1){
        cout<<"there is only one element "<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter the array elaments :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       for(int j=1;j<n;j++){
        if(arr[j-1]<arr[j] && arr[j]>arr[j+1]){
            cout<<"The peek element index is : "<<j<<endl;
        }
    }
}