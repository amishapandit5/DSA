#include <iostream>
#include <cstring>
using namespace std;

int getlength( char arr[]){
    int length = 0;
    int i=0;
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void replacespace(char ch[]){
  int i=0;
  int e = getlength(ch) - 1;
  while(i<=e){
    if(ch[i]=='\t' || ch[i]==' ')
      ch[i]='@';
    i++;
  }
}

int main() {
  char ch[100];
  cin.getline(ch,50);
  cout<<"original array:"<<ch;
  replacespace(ch);
  cout<<"altered array:"<<ch;
  return 0;
}