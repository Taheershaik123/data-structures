#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
node* insertion(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    else if(root->data >val){
        root->left = insertion(root->left,val);
    }
    else{
        root->right =  insertion(root->right,val);
    }
    return root;
}
void inorder(node*root,vector<int>& val){
    if(root==NULL){
        return ;
    }
    inorder(root->left,val);
    val.push_back(root->data);
    inorder(root->right,val);

}
void creatingarr(node* root){
    vector<int> element;
    inorder(root,element);
    sort(element.begin(),element.end());
    for(int i=0;i<element.size();i++){
        cout<<element[i]<<" ";
    }cout<<endl;
    
}
int main(){
    node* root = NULL;
    root = insertion(root,5);
    insertion(root,2);
    insertion(root,3);
    insertion(root,4);
    insertion(root,6);
    insertion(root,7);
    insertion(root,8);
    creatingarr(root);

}
