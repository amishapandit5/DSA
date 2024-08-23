#include<iostream>
using namespace std;

int searchelement(int a[],int size,int target){
    int i=0;
    while(i<size){
        if(target==a[i]){
            return i;
        }
        else
            i++;
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=7,target=2;
    int r=searchelement(a,size,target);
    if(r!=-1)
        cout<<"element found at index "<<r;
    else
        cout<<"element not found";
}