#include<iostream>
using namespace std;
int main(){
    cout<<"enter the size of the array"<<endl;
    int n;
    int k;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the sub array size"<<endl;
    cin>>k;
    if(k>n)
    {
        cout<<"out of bound"<<endl;
    }
    int Fin = 0;
    for(int i=0;i<=n-k;i++){
     int total=0;
        for(int j=i;j<i+k;j++){
           total = total + arr[j];
        }
        if(total > Fin){
            Fin = total;
        }


    }
    cout<<Fin;
}