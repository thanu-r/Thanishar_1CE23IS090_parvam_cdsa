#include<stdio.h>
void main(){
    int i=100, j=2, c=i/2;
    //3.4 is double by default. In C language, factional values are considered as double.
    float f=3.4;//3.4 is taken as double, but automatically converete to float.
    float t=5.4f;//5.4 must be taken as floating point value.
    float o=100.00F;
    printf("%.2f\n",(o/j));
    
    int n=f;//Narrowing c onversion, Data loss.
    printf("%d\n",n);
    int n1=100;
    //Casting (<data-type>), In C language casting is optional.
    float f1=(float)n1;//Widening conversion, No data loss.
    printf("%f",f1);
}