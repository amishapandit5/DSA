#include <iostream>
#include<cstring>
using namespace std;

int main() {
  string str;
  getline(cin,str);
  cout << str << endl;
  cout <<"length is: " <<str.length() << endl;
  cout <<"is empty: " <<str.empty() << endl;
  str.push_back('a');
  cout << str << endl;
  str.pop_back();
  cout << str << endl ;
  cout << str.substr(0,6) << endl ;

  string a ="pot";
  string b ="potato";
  if(a.compare(b)==0)
    cout<<"a nd b are equal" << endl;
  else
     cout<<"a nd b are not equal" << endl;

  
  string x ="potatos are yellow";
  string v ="you";
  cout << x.find(v) << endl;
  if(x.find(v) == string::npos)
    cout<<"not found" << endl;
  cout << x.replace(0,7,v);
  return 0;
}