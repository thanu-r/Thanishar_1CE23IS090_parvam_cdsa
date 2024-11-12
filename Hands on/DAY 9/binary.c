#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool b=false;
    int x=6,l=0,r=n-1,m=0;
    while(r>=l){
        m=(l+r)/2;
        if(arr[m]==x){
            b=true;
            break;
        }
        if(arr[m]>x){
            r=m-1;
        }else{
            l=m+1;
        }
    }if(b){
        printf("Yes");
    }else{
        printf("No");
    }
}