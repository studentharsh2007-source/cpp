#include<iostream>
using namespace std;
int main(){
    int n[5]={5,15,22,1,-15};
    int size=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        // if(n[i]<smallest){
        //     smallest=n[i];
        // }
        smallest=min(n[i],smallest);

    }
    for(int j=0;j<size;j++){
        // if(n[j]>largest){
        //     largest=n[j];
        // }
        largest=max(n[j],largest);
    }
    cout<<"largest value: "<<largest<<"\n";
    cout<<"smallest value: "<<smallest;
}