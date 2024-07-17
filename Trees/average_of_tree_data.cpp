#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left = NULL;
        right = NULL;

    }
};
void inorder(node* root,vector<int>& n){
    if(root==NULL){
        return;
    }
    inorder(root->left,n);
    n.push_back(root->data);
    inorder(root->right,n);
}
int average(node* root,vector<int>& s){
    inorder(root,s);
    int q=0;
    int t=0;
    for(int r:s){
        q+=r;
        ++t;
    }
    cout<<"The total is : "<<q<<endl;
    return q/t;
}
int main(){
    vector<int> element;
    node* root = new node(50);
    root->left = new node(40);
    root->left->left = new node(30);
    root->left->right = new node(20);
    root->right = new node(60);
    root->right->left = new node(70);
    root->right->right = new node(80);
    int result = average(root,element);
    cout<<"The average of the tree is : "<<result<<endl;
}