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
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
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
    node* root = new node(5);
    root->left= new node(10);
    root->left->left = new node(3);
    root->left->right = new node(32);
    root->right = new node(44);
    root->right->left = new node(43);
    root->right->right = new node(100);
     creatingarr(root);

}
