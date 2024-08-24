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
    n->next =NULL;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<endl;
}
node* List(node* l1,node* l2){
    node* Listnew = new node();
    node* temp = Listnew;
     int carry =0;
    while(l1!=NULL||l2!=NULL){
        int x = (l1!=NULL)?l1->data:0;
        int y = (l2!=NULL)?l2->data:0;
        int sum = carry+x+y;
        carry = sum/10;
        temp->next = new node(sum%10);
        temp = temp->next;
        if(l1!=NULL&&l2!=NULL){
            l1 = l1->next;
            l2 = l2->next;
        }
        if (carry>0){
            temp->next = new node(carry);
        }
        
    }
    return Listnew;
}
int main(){
    
}