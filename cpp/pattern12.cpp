#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n value"<<endl;
    cin>>n;

   for(int i=0;i<n;i++){
    int r = 65;
    for(int j=0;j<=i;j++){
        cout<<static_cast<char>(r)<<" ";
        r++;
    }
    cout<<endl;
   }
}