#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the sive of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){

       int t=1;
        for(int s=j+1;s<n;s++){
            if(arr[j]==arr[s]){
            t++;
            }
            else if(arr[s]==arr[n-1]){
                if(t!=1){
                cout<<"count of "<<arr[j]<<" is -> "<<t<<endl;
                }

            }
        }
    }
    
}