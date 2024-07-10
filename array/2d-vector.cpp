#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> > a;

    vector<int> c{1,2,3};
    vector<int> d{4,5,6};
    vector<int> e{7,8,9};

    a.push_back(c);
    a.push_back(d);
    a.push_back(e);

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[0].size();j++){          //if no. of columns atre diff use a[i]
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}