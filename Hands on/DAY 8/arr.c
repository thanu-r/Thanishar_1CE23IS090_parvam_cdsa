#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=28;
    //printf("enter size");
    //scanf("%d",&a)
    int *arr=(int *)calloc(a ,sizeof(int));
    arr[2]=200;

    printf("%d\n",arr[0]);
    free(arr);
    printf("%d\n",arr[0]);
}