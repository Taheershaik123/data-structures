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
node* insertion(node* &root,int val){
    if(root== NULL){
        return new node(val);
    }
    else if(root->data > val){
        root->left = insertion(root->left,val);
    }
    else{
        root->right = insertion(root->right,val);
    }
    return root;
}
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
bool check(node* root,int minval,int maxval){
    if(root == NULL){
        return true;
    }
    else if(root->data < minval || root->data > maxval){
        return false;
    }
    return check(root->left,minval,root->data)&&check(root->right,root->data,maxval);
}
bool bst(node* root){
    int mini = INT16_MIN;
    int maxx = INT16_MAX;
    return check(root,mini,maxx);
}
int main(){
    node* root = NULL;
    root= insertion(root,5);
    insertion(root,1);
    insertion(root,2);
    insertion(root,4);
    insertion(root,58);
    preorder(root);cout<<endl;
    if(bst(root)){
        cout<<"bst"<<endl;
    }
    else{
        cout<<"not a bst";
    }

}