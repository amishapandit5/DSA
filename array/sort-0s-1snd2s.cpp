#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    std::vector<int> arr{0,1,0,2,1,0,2,2,1};
    int i=0,start=0,end=arr.size()-1;
   while(i!=end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
        else if(arr[i]==1){
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            end--;
        }
   }
   for(auto val:arr){
    cout<<val<<" ";
   }
}