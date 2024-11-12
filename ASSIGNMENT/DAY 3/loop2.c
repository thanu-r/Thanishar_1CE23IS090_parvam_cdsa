#include<stdio.h>
int main(){
    int number,sum=0;
    printf("enter a five_digit integer:");
    scanf("%d",&number);
    sum+=number % 10;
    number /=10;
    sum+=number % 10;
    number /=10;
    sum+=number % 10;
    number /= 10;
    sum +=number % 10;
    number /=10;
    sum +=number % 10;
    printf("sum of the digits:%d\n",sum);
    return 0;
}