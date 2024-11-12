#include<stdio.h>
void main(){
    int f=1232,x=0,y=0,a=f;
    while(f>0){
        x=f%10;
        y=y*10+x;
        f=f/10;
    }
    printf("%d\n",y);
    if(y==a){
        printf("yes");
    }
    else{
        printf("No");
    }
}