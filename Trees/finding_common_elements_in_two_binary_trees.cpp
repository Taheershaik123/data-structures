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
node* insertion(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left = insertion(root->left,val);
    }
    else{
        root->right = insertion(root->right,val);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}
void collector(node* root,vector<int>& element){
    if(root == NULL){
        return;
    }
    collector(root->left,element);
    element.push_back(root->data);
    collector(root->right,element);
}
void common_node_printer(node* root1,node* root2){
    vector<int> element;
    vector<int> element1;
    collector(root1,element);
    collector(root2,element1);
    // it is basically optional if you want to do you can and 
    
    //sort(element.begin(),element.end());
   // sort(element1.begin(),element1.end());
    cout<<"the repeted elements are in the two trees :"<<endl;
    if(root1 ==NULL||root2==NULL){
    cout<<"the root is empty so that we can`t make the comparision"<<endl;
    
    }
    else if(element1.size()!= element.size()){
        cout<<"both are not having the same height"<<endl;
        return;
    }
    for(int i=0;i<element.size();i++){
        for(int j=i;j<element1.size();j++){
            if(element[i]==element1[j]){
                cout<<element1[j]<<"->";
            }
        }
    }
}
int main(){
    node* root1 = NULL;
    node* root2 = NULL;
    root1 =insertion(root1,50);
    root2 = insertion(root2,60);
    insertion(root1,40);
    insertion(root1,60);
    insertion(root1,70);
    insertion(root1,80);
    insertion(root1,90);
    insertion(root1,400);
    insertion(root1,408);
    insertion(root2,40);
    insertion(root2,50);
    insertion(root2,90);
    insertion(root2,20);
    insertion(root2,430);
    insertion(root2,0);
    insertion(root2,410);
    inorder(root1);cout<<endl;
    inorder(root2);cout<<endl;
    common_node_printer(root1,root2);cout<<endl;

}