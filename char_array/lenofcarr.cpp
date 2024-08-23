#include <iostream>
using namespace std;

void getlength( char name[]){
    int length = 0;
    int i=0;
    while(name[i] != '\0'){
        length++;
        i++;
    }
    cout<<"length of array is: " << length << endl ;
}

int main() {
  char name[100];
  cin >> name;
  cout << "Your name is : " << name <<endl;
  getlength(name);
  return 0;
}