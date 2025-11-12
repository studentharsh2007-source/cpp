#include<stdio.h>
int main(){
    int arr[0],small,large;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    large=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    printf("small is %d\n",small);
    printf("large is%d",large);
    return 0;
}