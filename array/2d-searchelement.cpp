#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int key=9;
    bool flag=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==key){
                flag=1;
                cout<<"element found at index: "<<3*i+j<<endl;
                break;
            }
        }
    }
    if(flag!=1)
      cout<<"element not found"<<endl;
}
