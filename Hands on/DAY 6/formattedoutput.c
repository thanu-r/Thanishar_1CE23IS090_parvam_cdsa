#include<stdio.h>
int main(){
    unsigned int hexvalue;
    printf("enter a hexadecimal value(up to 4 digits):");
    scanf("%x", &hexvalue);
    printf("%5u\n",hexvalue);
    printf("%5o\n",hexvalue);
    printf("%5X\n",hexvalue);
    return 0;


}