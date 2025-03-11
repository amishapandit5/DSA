#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* prev;
  node* next;

  node(){
    this->data = 0;
    this->prev = NULL;
    this->next = NULL;
  }

  node(int data){
    this->data = data;
    this->prev = NULL;
    this->next = NULL;
  }
};

void printll(node* head){
  node* temp = head;
  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}
int main() {
  node* head = new node(4);
  node* sec = new node(5);
  node* th = new node(6);
  node* tail = new node(7);

  head -> prev = NULL;
  sec -> prev = head;
  th -> prev = sec;
  tail -> prev = th;

  head -> next = sec;
  sec -> next = th;
  th -> next = tail;
  tail -> next = NULL;

  printll(head);
  return 0;
}