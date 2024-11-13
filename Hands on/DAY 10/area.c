#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct str1{
    int area;
    int peri;
};
int circle(){
    struct str1 a1;
    double pi=3.14,r=12.5;
    a1.area=pi*(r*r);
    printf("%d\n",a1.area);
    a1.peri=2*pi*r;
    printf("%d\n",a1.peri);
} 
int square(){
    struct str1 a2;
    int a=20;
    a2.area=a*a;
    printf("%d\n",a2.area);
    a2.peri=4*a;
    printf("%d\n",a2.peri);
}
int rectangle(){
    struct str1 a3;
    int l=45.5,b=45.5;
    a3.area=l*b;
    printf("%d\n",a3.area);
    a3.peri=2*(l+b);
    printf("%d\n",a3.peri);
}
int main(){
    circle();
    square();
    rectangle();
}