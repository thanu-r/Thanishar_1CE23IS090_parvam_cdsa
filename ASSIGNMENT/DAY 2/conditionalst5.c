#include<stdio.h>
int main(){
    int age,
    monthly_income;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter monthly income:");
    scanf("%d",&monthly_income);
    if(age<18 || age>60 || monthly_income<0 || monthly_income>50000){
        printf("invalid input\n");
        return 0;
    }
    if (age>=18 && age <=25 && monthly_income>=5000){
        printf("eligible\n");
    }
    else if(age>40 && monthly_income>=15000){
        printf("eligible\n");
    }
    return 0;
    }

