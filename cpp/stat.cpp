#include<iostream>
using namespace std;
class taheer{
    public:
    static void sample(){
     static int i =10 ;
     cout<<i;
     i+=10;

 }
};
int main(){
    taheer::sample();cout<<endl;
    taheer::sample();
   

}