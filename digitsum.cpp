#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int last;

    int digitsum=0;
    while(n>0){
        last=n%10;
        n=n/10;
        digitsum=digitsum+last;
    }cout<<digitsum;
}