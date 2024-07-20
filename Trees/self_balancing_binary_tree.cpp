#include<iostream>
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
node* insertion(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    if(root->data > val){
        swap(root->data,val);
    }
    if(root->left == NULL){
      root->left = insertion(root->left,val);
    }
    else if(root->right == NULL){
        root->right = insertion(root->right,val);
    }
}