#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertion(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
   while(temp->next != NULL){
    temp = temp->next;
    }
    
    temp->next = n;
    n->next = NULL;
}
int sizee(node* &head){
    int size = 0;
    node* temp = head;
    while(temp != NULL){
        temp=temp->next;
        size++;
    } 
    return size;
}
bool palindram(node* &head){
    node* temp = head;;
    int n = sizee(head);
    int s =n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=temp->data;
        temp=temp->next;
    }
    for(int j =0;j<n;j++){
        if(arr[j] == arr[s]){
            return false;
            s--;
        }

    }
    return true;
}
int main(){
    node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,3);
    insertion(head,2);
    insertion(head,1);
    if(palindram(head)){
        cout<<"palindram";
    }
    else{
        cout<<"not a palindram";
    }
}