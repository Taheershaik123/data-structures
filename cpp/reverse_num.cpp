#include<iostream>
using namespace std;
int rev(int n){
    int a =n,b=0,c=0;
    while(a!=0){
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    return b;

}
int main(){
    int num;
    cin>>num;
    cout<<rev(num);
}