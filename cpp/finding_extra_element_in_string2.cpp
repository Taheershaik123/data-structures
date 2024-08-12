#include<iostream>
#include<set>
using namespace std;
int main(){
    string s1,s2;
    set<char>s;
    cout<<"Enter the string one"<<endl;
    cin>>s1;
    for(char i:s1){
        s.insert(i);
    }
    cout<<"Enter the second string"<<endl;
    cin>>s2;
    for(char w : s2){
        if(s.find(w)==s.end()){
            cout<<w;
        }
    }
}