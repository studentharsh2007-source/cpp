#include<iostream>
using namespace std;
int fac(int a){
    int mal=1;
    for(int i=1;i<=a;i++){
        mal=mal*i;
    }
    return mal;
}
int ncr(int n,int r){
    int fac_n=fac(n);
    int fac_r=fac(r);
    int fac_nmr=fac(n-r);
    fac_n/fac_r*fac_nmr;
    return fac_n/(fac_r*fac_nmr);
}
int main(){
    cout<<ncr(8,2)<<"\n";
    cout<<ncr(5,4);
}