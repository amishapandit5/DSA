#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    std::vector<int> arr{10,20,30,40,50};
    int sum=50;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum)
                cout<<"pair found: "<<arr[i]<<" and "<<arr[j]<<endl;
        }
    }
    return 0;
}