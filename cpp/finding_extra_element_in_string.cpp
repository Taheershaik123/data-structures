#include<iostream>
#include<set>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the first string"<<endl;
    cin>>s1;
    cout<<"Enter the string two "<<endl;
    cin>>s2;
    set<char>s;
    for(int i=0;i<s2.length();i++){
        s.insert(s2[i]);
    }
    for(int j=0;j<s1.length();j++){
        s.erase(s1[j]);
    }
    cout<<*s.begin();
}