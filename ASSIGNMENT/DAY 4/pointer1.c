#include<stdio.h>
#include<stdlib.h>
void update(int *a,int *b){
    int sum= *a+*b;
    int diff=abs(*a-*b);
    *a=sum;
    *b=diff;
    int main(){
        int x,y;
        scanf("%d %d",&x,&y);
        update(&x,&y);
        printf("%d\n%d\n",x,y);
        return 0;
    }
}