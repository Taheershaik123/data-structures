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
        left = NULL;
        right = NULL;
    }
};
node* insertion(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    else if(root->data > val){
        root->left =  insertion(root->left,val);
    }
    else{
        root->right = insertion(root->right,val);
    }
    return root;
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
int main(){
    node* root = NULL;

    root= insertion(root,50);
    insertion(root,1);
    insertion(root,10);
    insertion(root,11);
    insertion(root,12);
    insertion(root,13);
    insertion(root,431);
    insertion(root,61);
    insertion(root,71);
    postorder(root);
    cout<<endl;
}