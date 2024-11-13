#include<stdio.h>
void main(){
    int arr[6]={100,290.112,56,289,11};
    int * const ptr=&arr[0];
     //arr++;
    //ptr++;
    arr[2]=25;
    *(ptr+2)=119;
}