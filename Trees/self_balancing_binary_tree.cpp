#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
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
int counting(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+counting(root->left)+counting(root->right);
}
node* insertion(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    if(root->data > val){
        swap(root->data,val);
    }
    if(root->left == NULL){
      root->left = insertion(root->left,val);
    }
    else if(root->right == NULL){
        root->right = insertion(root->right,val);
    }
    else {
        if(counting(root->left) <= counting(root->right)){
            root->left = insertion(root->left,val);
        }
        else{
            root->right = insertion(root->right,val);
        }

    }
    return root;
}

void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root = NULL;
    root=insertion(root,1000);
    insertion(root,1);
    insertion(root,22);
    insertion(root,21);
    insertion(root,23);
    insertion(root,28);
    insertion(root,25);
    insertion(root,12);
    insertion(root,222);
    insertion(root,23);
    preorder(root);cout<<endl;
    
    }