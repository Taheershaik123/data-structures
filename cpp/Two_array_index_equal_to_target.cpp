#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ->"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array ->"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target ;
    cout<<"Enter the target valu ->"<<endl;
    cin>>target;
    for(int j=0;j<n;j++){
        if(arr[j]==target){
            cout<<"the index is ->"<<arr[j]<<endl;
            continue;
        }
        for(int s=j+1;s<n;s++){
            if(arr[s]+arr[j]==target){
                cout<<"the indexes are "<<arr[s]<<" and "<<arr[j]<<endl;
            }
        }
    }
}