#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int a=10;
    switch(a){
        case 1:
        printf("hi1");
        break;
        case 10:
        printf("hi2");
        break;
        case -1:
        printf("hi3");
        break;
        default:
        printf("bye");
    }
}