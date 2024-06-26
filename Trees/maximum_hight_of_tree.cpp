#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
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
    else if(root->data > val){
        root->left = insertion(root->left,val);
    }
    else{
        root->right =  insertion(root->right,val);
    }
    return root;
}
int maxheight(node* root){
    if(root == NULL){
        return -1;
    }
    int min = maxheight(root->left);
    int Max = maxheight(root->right);
    return max(min, Max)+1;
}
void inorder(node* root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = NULL;
    root= insertion(root,5);
    insertion(root,2);
    insertion(root,6);
    insertion(root,7);
    insertion(root,3);
    insertion(root,1);
    insertion(root,9);
    inorder(root);cout<<endl;
    cout<<maxheight(root);


}