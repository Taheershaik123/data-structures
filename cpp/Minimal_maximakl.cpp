#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> element(n);
    for(int i=0;i<n;i++){
    cin>>element[i];
    }
    sort(element.begin(),element.end());
    cout<<"The minimal element is "<<element[0]<<endl;
    cout<<"The maximal element is "<<element[n-1]<<endl;;
}