#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

// int getlength( char arr[]){
//     int length = 0;
//     int i=0;
//     while(arr[i] != '\0'){
//         length++;
//         i++;
//     }
//     return length;
// }

bool palindrome(char ch[]){
  int i=0;
  int e = strlen(ch) - 1;
  while(i<e){
    if(ch[i]==ch[e]){
       i++;
       e--;
    }
    else
      return 0;
  }
  return 1;
}

int main() {
  char ch[100];
  cout<<"enter a word: "<< ch << endl;
  cin>>ch;
  int r=palindrome(ch);
  if(r==1)
    cout<<"its a palindrome"<<endl;
  else
    cout<<"its not a palindrome"<<endl;
  return 0;
}
