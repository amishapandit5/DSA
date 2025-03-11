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

void inserthead(node* &head,int data){
  node* newnode = new node(data);
  newnode->next = head;
  head = newnode;

}

void printll(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
int main() {
  node* head=new node(10);
  node* second=new node(20);
  inserthead(head,40);
  inserthead(head,55);
  inserthead(head,70);
  printll(head);
  return 0;
}