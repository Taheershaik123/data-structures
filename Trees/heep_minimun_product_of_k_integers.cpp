#include<iostream>
#include<algorithm>
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
int counting(node* root){
    if(root == NULL){
        return 0;
    }
    return 1+counting(root->left)+counting(root->right);
}
node* insertion(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    if(root->data < val){
        swap(root->data,val);
    }
    if(root->left == NULL){
        root->left =  insertion(root->left,val);
    }
    else if(root->right,val){
        root->right = insertion(root->right,val);
    }
    else{
        if(counting(root->left) >= counting(root->right)){
            root->left =  insertion(root->left,val);
        }
        else{
            root->right = insertion(root->right,val);
        }
    }
    return root;
}
void inorder(node* root,vector<int>& s){
    if(root == NULL){
        return;
    }
    inorder(root->left,s);
    s.push_back(root->data);
    inorder(root->right,s);
}
int K_th_product(node* root,int k){
    vector<int> elements;
    inorder(root,elements);
    sort(elements.begin(),elements.end());
    int product = 1;
    for(int i=0;i<=k;i++){
        product *= elements[i];

    }
    return product;
}
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    node* root= NULL;
    root=  insertion(root, 8);
    insertion(root,1);
    insertion(root,10);
    insertion(root,12);
    insertion(root,11);
    insertion(root,13);
    insertion(root,15);
    preorder(root);cout<<endl;

    int k;
    cout<<"enter the elements count you want to find the product"<<endl;
    cin>>k;
    int f = K_th_product(root,k);
    cout<<"the product is -> "<<f<<endl;

    }