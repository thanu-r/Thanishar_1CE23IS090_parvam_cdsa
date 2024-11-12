#include<stdio.h>
//student is the composite datatype
struct student{
    int rollno;char name[50];int semisternumber;
    float fees;char course[50];
};
struct student s;
void main(){
    printf("%d\n",s.rollno);
    printf("%f\n",s.fees);
    s.rollno=1001; s.fees=52000.00f;
     printf("%d\t\t",s.rollno);
    printf("%f",s.fees);
}

