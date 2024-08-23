#include<iostream>
using namespace std;

int lastocc(int a[],int size,int target){
    int start=0;
    int end=size-1,ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(target==a[mid]){
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]<target)
            start=mid+1;
        else if(a[mid]>target)
            end=mid-1;
        mid=(start+end)/2;
    }
    return ans;
}

int main(){
    int a[]={1,2,2,2,4,6,7};
    int size=7,target=2;
    int r=lastocc(a,size,target);
    if(r!=-1)
        cout<<"element found at index "<<r;
    else
        cout<<"element not found";
}