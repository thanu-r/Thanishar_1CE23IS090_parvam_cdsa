#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
int main(){
    int arr[]={1,4,8,7,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            x=arr[i];       
        }
    }
    printf("%d",x);
}
