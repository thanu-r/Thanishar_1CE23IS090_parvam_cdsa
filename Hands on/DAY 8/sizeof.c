#include<stdio.h>
#include<stdbool.h>
int main(){
    int a[]={10,25,30,45,55};
    int c=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        c=c+a[i];
    } printf("%d\n",c);
}
