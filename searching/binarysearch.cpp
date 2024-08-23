#include<iostream>
using namespace std;

int searchelement(int a[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(target==a[mid])
            return mid;
        else if(a[mid]<target)
            start=mid+1;
        else if(a[mid]>target)
            end=mid-1;
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5,6,7};
    int size=7,target=5;
    int r=searchelement(a,size,target);
    if(r!=-1)
        cout<<"element found at index "<<r;
    else
        cout<<"element not found";
}