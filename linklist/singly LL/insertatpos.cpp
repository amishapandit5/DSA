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

void insertatpos(node* &head,int pos,int data){
  node* temp = head;
  if(pos == 1){
    node* newnode = new node(data);
    newnode->next = head;
    head = newnode;
  }
  else{
    for(int i = 1; i <= pos-2 ; i++){
      temp = temp->next;
    }
    node* newnode = new node(data);
    if(temp->next == NULL){
      temp->next = newnode;
    }
    else{
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
}

void printll(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
int main() {
  node* head= new node(10);
  node* sec = new node(20);
  node* th = new node(30);
  node* fth = new node(40);

  head->next = sec;
  sec->next = th;
  th->next = fth;

  insertatpos(head,1,55);

  printll(head);

  return 0;
}