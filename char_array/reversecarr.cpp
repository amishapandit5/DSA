#include<iostream>
#include<algorithm>
using namespace std;


int getlength( char arr[]){
    int length = 0;
    int i=0;
    while(arr[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void reversearray(char arr[]){
    int s = 0;
    int x = getlength(arr);
    int e = x-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    char arr[20];
    cin>> arr;
    cout<<"original array is : "<<arr<< endl;
    reversearray(arr);
    cout<<"reversed array is:"<<arr<<endl;
    return 0;
}