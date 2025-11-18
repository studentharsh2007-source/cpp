#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    int brr[n+1];
    int pos=2;
    int e=10;
    for(int i=0;i<pos;i++){
        brr[i]=arr[i];
    }
    brr[pos]=e;
    for(int i=pos;i<n;i++){
        brr[i+1]=arr[i];
    }
    for(int i=0;i<=n;i++){
        cout<<brr[i]<<" ";
    }
    return 0;
};
