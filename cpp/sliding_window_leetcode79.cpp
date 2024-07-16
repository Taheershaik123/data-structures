#include<iostream>
using namespace std;
int main(){
    cout<<"enter the string"<<endl;
    string st;
    cin>>st;
    cout<<"enter the sub string"<<endl;
    string st1;
    cin>>st1;
    int k = 4;
    if(st.length()<st1.length()||st1.length()>k){
        cout<<"not possible"<<endl;
    }

    for(int i=0 ;i<=st.length()-k;i++){
        int count=0;
        for(int j=i;j<i+k;j++){
            for(int s=0;s<st1.length();s++){
               if(st[j] == st1[s]){
                count++;
               }
            }
            if(count == st1.length()){
                for(int r=i;r<i+k;r++){
                    cout<<st[r];
                }
            }
           
        }
    }
}