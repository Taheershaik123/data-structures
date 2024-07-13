#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagrame(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s == t;
}
int main(){
    string t ="taheer";
    string s ="reehat";
    for(int i=0;i<t.size();i++){
        for(int j=0;j<s.size();j++){
            if(t[i]==s[j]){
                s[j] = '0';
            }
        }

    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            cout<<"not anagram";
            return 0;
        }
    }
    cout<<" anagram ";
    cout<<anagrame(s,t);
}