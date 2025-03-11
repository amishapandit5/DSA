#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;

  node(){
    this->data=0;
    this->next=NULL;
  }

  node(int data){
    this->data=data;
    this->next=NULL;
  }
};

void printll(node* &head){
  node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

node* reversell(node* &prev,node* &curr){
  if(curr == NULL)
    return prev;
  
  node* fwd = curr -> next;
  curr -> next = prev;

  return reversell(curr,fwd);
}
int main() {
   node* head = new node(10);
   node* second = new node(30);
   node* third = new node(40);
   node* fourth = new node(50);

   head->next=second;
   second->next=third;
   third->next=fourth;

   cout<<"printing ll: "<< endl;
   printll(head);

   node* prev = NULL;
   node* curr = head;

   head = reversell(prev,curr);

   cout<<"printing reversed ll: "<< endl;
   printll(head);
  return 0;
}