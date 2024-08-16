#include<iostream>
#include<string>    
using namespace std;
int main(){
    int n;
    cout<<"Enter the num for pattern"<<endl;
    cin>>n;
    int s = 65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(s)<<" ";
            s++;
         if(s>90){
            s = 65;
         }
        }
        cout<<endl;
    }
}