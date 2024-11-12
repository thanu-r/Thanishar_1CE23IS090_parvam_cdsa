#include<stdio.h>
void main(){
    printf("%c\n",'A');//character
    printf("%s\n","A");//string
    char ch='B';
    printf("%c\n",ch);
    printf("%d\n",ch);//Method 1 of finding ASCII value.
    ch++;
    printf("%d\n",ch);
    printf("%c\n",ch);
    
    int i=ch;//convert character to integer,Method 2 of finding ASCII value.
    printf("%d\n",i);
    i+=32;
    ch=i;
    printf("%c",ch);
}