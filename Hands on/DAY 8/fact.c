#include<stdio.h>
void main(){
    int f=1;
    for(int i=5;i>=1;i--){
       f=f*i;
       printf("%d\n",i);
    }
    printf("%d\n",f);
}