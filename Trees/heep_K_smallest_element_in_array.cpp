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
      data =  val;
      left=NULL;
      right = NULL;
    }
};
int counting(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+counting(root->left)+counting(root->right);
}
// max heep
node* insertion(node* root,int val){
    if(root == NULL){
        return new node(val);
    }
    if(val > root->data){
        swap(root->data,val);
    }
    if(root->left == NULL){
        root->left = insertion(root->left,val);
    }
    else if(root->right == NULL){
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
void collecting(node* root,vector<int>& s){
    if(root == NULL){
        return;
    }
    collecting(root->left,s);
    s.push_back(root->data);
    collecting(root->right,s);
}
void K_small_element(node* root){
    vector<int> element;
    collecting(root,element);
    int result = INT16_MAX;
    for(int i=0;i<element.size();i++){
        if(element[i]<result){
            result = element[i];
        }
    }
    cout<<"The smallest element is -> "<<result<<endl;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root = NULL;
    root= insertion(root,6);
    insertion(root,1);
    insertion(root,2);
    insertion(root,3);
    insertion(root,4);
    insertion(root,5);
    insertion(root,8);
    preorder(root);cout<<endl;
    K_small_element(root);

}