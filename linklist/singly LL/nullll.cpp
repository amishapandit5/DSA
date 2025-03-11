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

void inserthead(node* &head,node* &tail,int data){
  node* newnode = new node(data);
  if(head == NULL){
    head = newnode;
    tail = newnode;
  }
  else{
  newnode->next = head;
  head = newnode;
  }
}
void inserttail(node* &tail,node* &head,int data){
  node* newnode = new node(data);
  if(tail == NULL){
    tail = newnode;
  }
  else{
    tail->next = newnode;
    tail = newnode;
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
  node* head=NULL;
  node* tail= NULL;

  inserthead(head,tail,10);
  inserthead(head,tail,20);
  inserthead(head,tail,30);
  inserttail(tail,head,40);
  inserttail(tail,head,55);
  inserttail(tail,head,70);
  printll(head);
  return 0;
}