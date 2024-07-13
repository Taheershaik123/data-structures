#include<iostream>
#include<bits/stdc++.h>
#include<vector>
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
void inoredr(node* root,vector<int>& element){
    if(root == NULL){
        return;
    }
    inoredr(root->left,element);
    element.push_back(root->data);
    inoredr(root->right,element);
}
void replece(node* root,vector<int>& element,int& i){
    if(root==NULL){
        return;
    }
    replece(root->left,element,i);
    root->data = element[i];
    ++i;
    replece(root->right,element,i);
}
void printinorder(node* root){
    if(root == NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<"->";
    printinorder(root->right);
}
void convert(node* root){
    vector<int>element;
    inoredr(root,element);
    sort(element.begin(),element.end());
    int index=0;
    replece(root,element,index);
}
int main(){
    node* root = new node(50);
    root->left = new node(60);
    root->right = new node(40);
    root->left->left = new node(70);
    root->left->right = new node(80);
    root->right->left = new node(30);
    root->right->right = new node(20);
    cout<<"inorder traversal before "<<endl;
    printinorder(root);
    cout<<endl;
    convert(root);
    cout<<"after converting to the bst"<<endl;
    printinorder(root);
}