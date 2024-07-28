#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
class grapg{
    int v;
    vector<vector<int>> adj;
    public:
    grapg(int v){
        this->v = v;
        adj.resize(v,vector<int>(v,0));
    }
    void addedge(int w,int v){
        adj[w][v]=1;
        adj[v][w]=1;
        
    }
    void printgraph(){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                cout<<adj[i][j]<<" ";
            }
            cout<<endl;
        }
    }

};
int main(){
    grapg g(5);
    g.addedge(0,1);
    g.addedge(0,4);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(1,4);
    g.addedge(2,3);
    g.addedge(3,4);
    g.printgraph();

}