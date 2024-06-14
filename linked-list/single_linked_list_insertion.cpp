#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }

};
void insertion(Node* &head , int val){
    Node* n = new Node(val);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
}
void display(Node* head){
      if(head == NULL){
        return;
      }
      Node* temp = head;
      while(temp != NULL){

      cout<<temp->data<<"->";
       
       temp = temp->next;

      }
}

int main(){
    Node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    display(head);

}