#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* next;

  node(){
    this -> data = 0;
    this -> next = NULL;
  }

  node(int data){
    this -> data = data;
    this -> next = NULL;
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
  node* fir = new node(55);
  node* sec = new node(65);
  node* th = new node(75);
  node* frth = new node(85);

  fir -> next = sec;
  sec -> next = th;
  th -> next = frth;
  frth -> next = fir;

  printll(fir);

  return 0;
}