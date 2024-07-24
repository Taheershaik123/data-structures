#include<iostream>
#include<bits/stdc++.h>
#include<vector>
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
    if(root== NULL){
        return new node(val);
    }
    if(root->data <val){
        swap(root->data,val);
    }
    if(root->left == NULL){
        root->left = insertion(root->left,val);
    }
    else if(root->right == NULL){
        root->right = insertion(root->right,val);
    }
    else{
        if(counting(root->left) <=  counting(root->right)){
            root->left = insertion(root->left,val);
        }
        else{
            root->right = insertion(root->right,val);
        }

    }
    return root;
}
void preorder(node* root,vector<int>& s){
    if(root == NULL){
        return;
    }
    s.push_back(root->data);
    preorder(root->left,s);
    preorder(root->right,s);

}
void replace(node* root,vector<int>& r,int& i){
    
    if(root == NULL){
        return;
    }
    root->data = r[i];
    i++;
    replace(root->left,r,i);
    replace(root->right,r,i);
}
void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void collect(node* root){
    int i=0;
    vector<int> element;
    inorder(root);cout<<endl;
    preorder(root,element);
    sort(element.begin(),element.end());
    replace(root,element,i);
    inorder(root);cout<<endl;
}
int main(){
    node* root = NULL;
    root = insertion(root,100);
    insertion(root,1);
    insertion(root,10);
    insertion(root,11);
    insertion(root,12);
    insertion(root,2);
    insertion(root,3);
    insertion(root,5);
    collect(root);
    
}
