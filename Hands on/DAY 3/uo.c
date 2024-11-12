#include<stdio.h>
void main(){
    int a=10, b=20;
    int c= a + b;
    printf("%d\n",c);
    c= a++ + b;
    printf("%d\n",c);
    printf("%d\n",a);
    c=++a +b;
      printf("%d\n",c);
    a=15;
    b=20;
      printf("\n\nResult:%d\n",(a + b-- + ++a + a * ++b / 5));
      printf("%X",255);
}  