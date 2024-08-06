#include<iostream>
#include<algorithm>
using namespace std;
int peekElement(int arr[],int size){
    int pick =0;
    for(int i=0;i<size;i++){
        if(arr[i]>pick&&arr[i]<=arr[i+1]){
            pick = arr[i];
        }
    }
    return pick;

}

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peekElement(arr,n);
}