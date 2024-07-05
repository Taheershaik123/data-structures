#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node( int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
int getcount(node* root,int low,int high){
    if(!root){
        return 0;
    }
    else if(root->data == low && root->data == high){
        return 1;
    }
    else if(root->data >= low && root->data <= high){
        return 1+getcount(root->left,low,high)+getcount(root->right,low,high);
    }
    else if(root->data > low){
        return getcount(root->left,low,high);
    }
    else{
        return getcount(root->right,low,high);
    }
}
int main(){
    node* root = new node(50);
    root->left = new  node(40);
    root->right = new node(30);
    root->left->left = new node(44);
    root->right->left = new node(55);
    root->right->right = new node(66);
    root->right->right->right = new node(90);
    inorder(root);cout<<endl;
    cout<<getcount(root,40,90);
}
