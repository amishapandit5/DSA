#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    std::vector<int> arr{1,2,3,3,4} ;
    std::vector<int> brr{2,3,3,5,6} ;
    std::vector<int> crr;
    
    for(int i=0;i<arr.size();i++){
        crr.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        crr.push_back(brr[i]);
    }
    for(int i=0;i<crr.size();i++){
        cout<<crr[i]<<" ";
    }
    return 0;
}
