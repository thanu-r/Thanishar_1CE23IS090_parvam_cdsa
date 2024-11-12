#include<stdio.h>
int mai(){
    int n,i,isprime=1;
    printf("enter a number:");
    scanf("%d",&n);
    if( n<= 1){
        isprime=0;
        }
        else{
            for(i=2;i*i<=n;i++){
                if(n % i ==0){
                    isprime=0;
                }
            }
        }
        if (isprime)
        printf("yes\n");
        else
        printf("no\n");
        return 0;
}