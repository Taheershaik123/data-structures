#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"@";
        }
        cout<<endl;
    }
}