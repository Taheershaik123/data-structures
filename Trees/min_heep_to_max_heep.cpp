#include<iostream>
#include<vector>
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
    if(root==NULL){
        return new node(val);
    }
    if(root->data >val){
        swap(root->data,val);
    }
    if(root->left == NULL){
        root->left = insertion(root->left,val);
    }
    else if(root->right == NULL){
        root->right = insertion(root->right,val);
    }
    else{
        if(counting(root->left)<= counting(root->right)){
            root->left = insertion(root->left,val);
        }
        else{
            root->right = insertion(root->right,val);
        }
    }
    return root;
}
void collecting(node* root,vector<int>& s){
    if(root == NULL){
        return;
    }
    s.push_back(root->data);
    collecting(root->left,s);
    collecting(root->right,s);
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
void replace(node* root,vector<int>& r,int& w){
    if(root==NULL){
        return;
    }
    root->data = r[w];
    w++;
    replace(root->left,r,w);
    replace(root->right,r,w);
}
void Vector_collect(node* root){
    vector<int>element;
    cout<<"before the modification"<<endl;
    preorder(root);cout<<endl;
    collecting(root,element);
    sort(element.begin(),element.end(),greater<int>());
    cout<<"After the modification the tree is look like this"<<endl;
    int i=0;
    replace(root,element,i);
    preorder(root);cout<<endl;
}
int main(){
    node* root = NULL;
    root = insertion(root,100);
    insertion(root,2);
    insertion(root,1);
    insertion(root,3);
    insertion(root,4);
    insertion(root,6);
    insertion(root,7);
    Vector_collect(root);
     
}