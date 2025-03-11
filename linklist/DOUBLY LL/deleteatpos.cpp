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

int len(node* head){
  node* temp = head;
  int l=0;
  while(temp!=NULL){
    l++;
    temp=temp->next;
  }
  return l;
}

void deleteatpos(node* &head,int pos){
  node* temp = head;
  node* cur = head;
  if(pos == 1){
    temp -> next -> prev = NULL;
    head = temp->next;
    temp->next = NULL;
    delete temp;
  }
  else if(pos == len(head)){
    for(int i =1; i<=pos-2; i++)
      temp=temp->next;
    for(int i =1; i<=pos-1; i++){
      cur=cur->next;
    }
    temp->next = NULL;
    cur -> prev = NULL;
    delete cur;
  }
  else{
    for(int i =1; i<=pos-2; i++)
      temp=temp->next;
    for(int i =1; i<=pos-1; i++){
      cur=cur->next;
    }
    temp->next = cur->next;
    cur -> next -> prev = temp;
    cur->next = NULL;
    cur -> prev = NULL;
    delete cur;
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

  deleteatpos(head , 2);

  printll(head);

  return 0;
}