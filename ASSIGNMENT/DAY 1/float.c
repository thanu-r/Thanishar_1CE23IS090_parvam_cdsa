#include<stdio.h>
int main(){
    float floatNUM;
    int intNUM;
    printf("enter a floating point number (-1000.0 to 1000.0):");
    scanf("%f",&floatNUM);
    intNUM=(int)
    floatNUM;
    printf("floating-point number:%.2f\n",floatNUM);
    printf("integer after type casting:%d\n",intNUM);
    return 0;

}