#include <iostream>
#include <cstring>
using namespace std;

void uppercase(char ch[]){
  int i = 0,j = strlen(ch);
  while(i<j){
    ch[i]=ch[i]-32;
    i++;
  }
cout<<ch;
}

int main() {
  char ch[100];
  cout<<"enter a word: "<< ch << endl;
  cin>>ch;
  uppercase(ch);
  return 0;
}