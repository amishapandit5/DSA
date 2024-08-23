#include <iostream>
using namespace std;

int findsqrt(int a[],int size,int n){
  int s=0,ans=-1;
  int e=size-1;
  int m=(s+e)/2;
  while(s<=e){
    if(m*m == n)
      return m;
    else if(m*m > n)
      e = m-1;
    else{
        ans = m;
        s = m+1;
    }
    m=(s+e)/2;
  }
  return ans;
}

int main() {
  int n,ans;
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int size=10;
  cout << "Enter number whose sqrt is to be found: " << endl;
  cin >> n;
  ans = findsqrt(a,size,n);
  cout << "ans is : "<< ans;
  return 0;
}