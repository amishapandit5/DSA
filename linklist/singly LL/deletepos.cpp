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
    head = head->next;
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
    delete cur;
  }
  else{
    for(int i =1; i<=pos-2; i++)
      temp=temp->next;
    for(int i =1; i<=pos-1; i++){
      cur=cur->next;
    }
    temp->next = cur->next;
    cur->next = NULL;
    delete cur;
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

  int l = len(head);
  cout<<l<<endl;
  
  deleteatpos(head,2);

  printll(head);


  return 0;
}