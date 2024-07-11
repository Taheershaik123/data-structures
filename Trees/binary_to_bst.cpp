#include<iostream>
#include<vector>
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
node* inserion(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    else if(root->data > val){
        root->left = inserion(root->left,val);

    }
    else{
        root->right = inserion(root->right,val);
    }
    return root;
}
void inorder(node* root,vector<int>& val)
{
    if(root==NULL){
        return;
    }
    inorder(root->left,val);
    inorder(root->right,val);
    val.push_back(root->data);
}
// void convert(node* root){
//     if(root==NULL){
//         return;
//     }
// }
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root = new node(10);
    root->left = new node(15);
    root->right = new node(9);
    root->left->left =  new node(13);
    root->left->right = new node(12);
    root->right->left = new node(8);
    root->right->right = new node(7);
    vector<int> elements;
    inorder(root,elements);
    sort(elements.begin(),elements.end());
    preorder(root);cout<<endl;
    int s = elements.size()/2+1;
    int r  = s;
    cout<<"root->"<<elements[r]<<endl;
     node* root1 = NULL;
     root1 = inserion(root1,elements[r]);         
    for(int i=0;i<elements.size();i++){
        if(i == r){
            continue;
        }
        inserion(root1,elements[i]);

    }
    preorder(root1);

}