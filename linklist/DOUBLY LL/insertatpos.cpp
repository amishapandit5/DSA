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

void insertatpos(node* &head,int pos,int data){
  node* temp = head;
  node* newnode = new node(data);
  if(pos == 1){
    newnode->next = head;
    head -> prev = newnode;
    head = newnode;
  }
  else{
    for(int i = 1; i <= pos-2 ; i++){
      temp = temp->next;
    }
    
    if(temp->next == NULL){
      temp->next = newnode;
      newnode -> prev = temp;
    }
    else{
      newnode->next = temp->next;
      temp -> next -> prev = newnode;
      newnode -> prev = temp;
      temp->next = newnode;
    }
  }
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

  insertatpos(head,3,45);

  printll(head);

  return 0;
}