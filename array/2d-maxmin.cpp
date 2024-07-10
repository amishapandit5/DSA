#include <bits/stdc++.h>
#include <limits.h>
using namespace std;


void findmaxmin(int arr[3][3]){
    int maxi=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    cout<<"max:"<<maxi<<endl;
    
    int mini=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    cout<<"min:"<<mini;
    
}

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    findmaxmin(a);
}

