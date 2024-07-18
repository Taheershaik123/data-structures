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
void inorderprint(node* root){
    if(root == NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<"->";
    inorderprint(root->right);
}
node* insertion_bst(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left = insertion_bst(root->left,val);
    }
    else{
        root->right =  insertion_bst(root->right,val);
    }
    return root;
}
void inorder(node* root,vector<int>& s){
    if(root==NULL){
        return;
    }
    inorder(root->left,s);
    s.push_back(root->data);
    inorder(root->right,s);
}
void creating(node* root,int sum){
    vector<int>element;
    inorder(root,element);
    sort(element.begin(),element.end());
    cout<<element.size()<<endl;
    for(int i=0;i<+element.size();i++){
        for(int j=i;j<element.size();j++){
            if(element[i]+element[j]==sum)
            {
                cout<<element[i]<<"->"<<element[j]<<endl;
                return;
            }
        }
        
    }

}

int main(){
    node* root = NULL;
    root = insertion_bst(root,50);
    insertion_bst(root,40);
    insertion_bst(root,60);
    insertion_bst(root,70);
    insertion_bst(root,80);
    insertion_bst(root,90);
    insertion_bst(root,30);
    insertion_bst(root,20);
    insertion_bst(root,10);
    inorderprint(root);cout<<endl;
    int key;
    cout<<"Enter the key you want find in two nodes"<<endl;
    cin>>key;
    creating(root,key);

}