#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Graph{
    int v;
    vector<vector<int>> adj;
    public:
    Graph(int v);
    void Addedge(int v,int w);
    void printGraph();

};
Graph::Graph(int v){

  this->v = v;
  adj.resize(v,vector<int>(v,0));
}
void Graph::Addedge(int v,int w){
    adj[w][v]=1;
    adj[v][w]=1;
}
void Graph::printGraph(){
    for(int i=0;i<v;++i){
        for(int j = 0;j<v;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    Graph g(5);
    g.Addedge(0,1);
    g.Addedge(0,4);
    g.Addedge(1,2);
    g.Addedge(1,3);
    g.Addedge(1,4);
    g.Addedge(2,3);
    g.Addedge(3,4);
    g.printGraph();

}