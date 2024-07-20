#include<iostream>
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
class heep{
    public:
    node* root;
    node* insertion(node* root,int val){
        if(root==NULL){
            return new node(val);
        }
        if(root->data > val){
            swap(root->data,val);
        }
        if(root->left == NULL){
           root->left = insertion(root->left,val);
        }
        else if(root->right == NULL){
           root->right =  insertion(root->right,val);
        }
        else{
            if(counofnode(root->left) <= counofnode(root->right)){
               root->left= insertion(root->left,val);
            }
            else{
             root->right = insertion(root->right,val);
            }
        }
         return root;
    }
    int counofnode(node* root){
        if(root==NULL){
            return 0;
        }
        return 1+counofnode(root->left)+counofnode(root->right);
    }
};
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root= NULL;
    heep h;
    root = h.insertion(root,5);
    h.insertion(root,3);
    h.insertion(root,31);
    h.insertion(root,43);
    h.insertion(root,23);
    h.insertion(root,13);
    h.insertion(root,33);
    h.insertion(root,32);
    h.insertion(root,1);
    
    preorder(root);
}