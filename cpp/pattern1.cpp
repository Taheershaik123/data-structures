#include<iostream>
using namespace std;
int main(){
// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}