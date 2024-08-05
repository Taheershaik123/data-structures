#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array ->"<<endl;
    cin>>n;
   int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total =0;
    for(int j=0;j<n;j++){
        total+=arr[j];
    }
    cout<<"The sum of array is "<<total<<endl;
}