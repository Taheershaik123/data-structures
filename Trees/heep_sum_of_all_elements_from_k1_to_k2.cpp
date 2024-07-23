#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
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
        root->left = insertion(root->left,val);
    }
    else if(root->right==NULL){
        root->right = insertion(root->right,val);
    }
    else{
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
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void pushing(node* root,vector<int>& s){
    if(root==NULL){
        return;
    }
    pushing(root->left,s);
    s.push_back(root->data);
    pushing(root->right,s);
}
void sum(node* root){
    vector<int> element;
    pushing(root,element);
    int summ =0;
    for(int i=0;i<element.size();i++){
        summ +=element[i];
    }
    cout<<"The total sum of the Max heep is -> "<<summ<<endl;
}
int main(){
    node* root = NULL;
    root = insertion(root,6);
    insertion(root,4);
    insertion(root,5);
    insertion(root,3);
    insertion(root,2);
    insertion(root,1);
    insertion(root,7);
    insertion(root,8);
    insertion(root,9);
    insertion(root,10);
    cout<<"The preorder of max heep is"<<endl;
    preorder(root);cout<<endl;
    sum(root);cout<<endl;
}
