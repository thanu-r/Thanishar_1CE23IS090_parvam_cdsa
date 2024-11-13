#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
    struct str1{
        int age;
        char ch;
    };
    int demo1(){
        struct str1 a2;
        a2.age=20;
        printf("%d\n",a2.age);
    }
    int main(){
        struct str1 a1;
        a1.age=10;
        printf("%d\n",a1.age);
        demo1();
    }
