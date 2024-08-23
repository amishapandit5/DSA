#include<iostream>
using namespace std;

int firstocc(int a[],int size,int target){
    int start=0;
    int end=size-1,ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target==a[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]<target)
            start=mid+1;
        else if(a[mid]>target)
            end=mid-1;
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int a[]={1,2,2,2,4,6,7};
    int size=7,target=2;
    int r=firstocc(a,size,target);
    if(r!=-1)
        cout<<"element found at index "<<r;
    else
        cout<<"element not found";
}