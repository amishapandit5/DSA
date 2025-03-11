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

void inserttail(node* &tail,int data){
  node* newnode = new node(data);
  tail->next = newnode;
  tail = newnode;

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
  node* tail=new node(20);

  head->next = tail;
  
  inserttail(tail,40);
  inserttail(tail,55);
  inserttail(tail,70);
  printll(head);
  return 0;
}