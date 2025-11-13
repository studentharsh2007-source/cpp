#include<iostream>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;

}
int min(int a,int b,int c){
    
    if(a<b&&a<c){
        return a;
    }
    else if(b<a&&b<c){
        return b;
    }else{
        return c;
    }
    
}
int son(int n){

    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int factorial(int m){
    int mal=1;
    for(int i=1;i<=m;i++){
        mal=mal*i;
    }
    return mal;
}
int main(){
    cout<<sum(5,5)<<"\n";
    cout<<min(6,2,1)<<"\n";
    cout<<son(5)<<"\n";
    cout<<son(10)<<"\n";
    cout<<factorial(5);
}