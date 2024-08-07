#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<a+b;
}
int summ(int a,int b){
    return a+b;

}
int main(){
    int a=10;
    int b =10;
    sum(a,b);
    summ(b,a);
}