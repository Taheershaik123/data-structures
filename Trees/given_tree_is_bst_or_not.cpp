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
    if(root == NULL){
        return new node(val);
    }
    else if(val < root->data){
        root->left = insertion(root->left,val);
    }
    else{
        root->right = insertion(root->right,val);

    }
    return root;
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
    }
bool check(node* root,int minval,int maxval)
{
    if(root== NULL){
        return true;
    }
    if(root->data < minval || root->data > maxval){
        return false;
    }
    return check(root->left,minval,root->data)&&check(root->right,root->data,maxval);
}
bool bst(node* root){
    return check(root,INT_MIN,INT_MAX);
}
 int main(){
//     node* root = NULL;
//     root = insertion(root,4);
//     insertion(root,2);
//     insertion(root,5);
//     insertion(root,1);
//     insertion(root,3);
//     inorder(root);
//     cout<<endl;
     node*  root = new node(5);
         root->left =new node(7);
         root->right =new node(1);
      bool s = bst(root);
     if(s!= false){
        cout<<"bst ";
     }
     else if (s == false)
     {
        cout<<"not bst";
     }
     
}
