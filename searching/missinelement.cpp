#include<iostream>
using namespace std;

int searchelement(int a[],int size){
    int start=0;
    int end=size-1,ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(a[mid]!=mid+1){
            end=mid-1;
            ans=mid;
        }
        else
            start=mid+1;
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int a[]={1,2,3,4,6,7};
    int size=7;
    int r=searchelement(a,size);
    if(r!=-1)
        cout<<"element missing at index "<<r;
    else
        cout<<"element not found";
}