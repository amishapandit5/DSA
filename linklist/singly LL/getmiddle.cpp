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

void getmiddle(node* &head){
  node* slow = head;
  node* fast = head; //node* fast = head->next;
  if(head == NULL)
    cout << "LL is empty";
  if(head -> next == NULL)
    cout << "Only one node in the list with the data:" << head -> data;
  while(fast != NULL){
    fast = fast -> next;
    if(fast != NULL){
      fast = fast -> next;
      slow = slow -> next;
    }
  }
  cout << "Middle node is:" << slow -> data;
  
}

void printll(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
}
int main() {
  node* head= new node(10);
  node* sec = new node(20);
  node* th = new node(30);
  node* fth = new node(40);

  head->next = sec;
  sec->next = th;
  th->next = fth;

  printll(head);
  getmiddle(head);


  return 0;
}