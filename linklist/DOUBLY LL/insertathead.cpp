#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* prev;
  node* next;

  node(){
    this -> data = 0;
    this -> prev = NULL;
    this -> next = NULL;
  }

  node(int data){
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
  }
};

void printll(node* head){
  node* temp = head;
  while(temp != NULL){
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

void insertathead(node* &head, int data){
  node* newnode = new node(data);
  newnode -> next = head;
  head -> prev = newnode;
  head = newnode; 
}
int main() {
  node* head = new node(55);
  node* sec = new node(65);
  node* th = new node(75);
  node* tail = new node(85);

  head -> prev = NULL;
  sec -> prev = head;
  th -> prev = sec;
  tail -> prev = th;

  head -> next = sec;
  sec -> next = th;
  th -> next = tail;
  tail -> next = NULL;

  printll(head);

  cout<<endl;

  insertathead(head,45);

  printll(head);

  return 0;
}