#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left =NULL;
        right = NULL;
    }
};
node* inseart(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    else if(root->data > val){
        root->left = inseart(root->left,val);
    }
    else{
        root->right = inseart(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void findmin(node* root){
    if(root->left == NULL){
        cout<<root->data;
    }
    findmin(root->left);
}
int main(){
    node* root = NULL;
   root= inseart(root,5);
    inseart(root,1);
    inseart(root,2);
    inseart(root,3);
    inseart(root,6);
    inseart(root,7);
    inorder(root);cout<<endl;
    findmin(root);

    
}