#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data= val;
        left = NULL;
        right = NULL;

    }
};
node* insertion(node* root,int val){
        if(root == NULL){
        return new node(val);

    }
    else if(root->data > val){
        root->left = insertion(root->left,val);

    }
    else{
        root->right = insertion(root->right,val);
    }
    return root;

};
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root = NULL;
    root=insertion(root,5);
    insertion(root,4);
    insertion(root,3);
    insertion(root,6);
    insertion(root,7);
    insertion(root,8);
    insertion(root,9);
    preorder(root);
}