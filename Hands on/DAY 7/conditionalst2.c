#include<stdio.h>
int main(){
    int a,b;
    printf("enter the first integer(a):");
    scanf("%d",&a);
    printf("enter the second integer (b):");
    scanf("%d",&b);
    if(a==b){
        printf("a and b are equal\n");
    }
    else if(a>b){
        printf("a is greater than b\n");
    }
        else {
            printf("a is less than b\n");
        }
        return 0;
    }
