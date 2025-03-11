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

int main() {
  node* head=new node();
  node* second=new node();
  node* third=new node();

  head->next=second;
  second->next=third;
  return 0;
}