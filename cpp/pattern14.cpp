#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n value->"<<endl;
    cin>>n;
    int s=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<static_cast<char>(s)<<" ";
            if(s>90){
                s=65;
            }
            s++;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<static_cast<char>(s)<<" ";
            if(s>90){
                s=65;
            }
            s++;
        }
        cout<<endl;
    }


}