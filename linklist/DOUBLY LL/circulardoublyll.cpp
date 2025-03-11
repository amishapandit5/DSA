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
void printll(node* n){
  node* temp = n;
  do{
    cout << temp -> data << " ";
    temp = temp -> next;
  }while(temp != n);
}


int main() {
node* fir = new node(4);
  node* sec = new node(5);
  node* th = new node(6);
  node* frth = new node(7);

  fir -> prev = frth;
  sec -> prev = fir;
  th -> prev = sec;
  frth -> prev = th;

  fir -> next = sec;
  sec -> next = th;
  th -> next = frth;
  frth -> next = fir;

  printll(fir);

  return 0;
}