#include<stdio.h>
int main(){
    int n1,n2,n3,n4;
    n1=89;
    n2=19;
    n3=123;
    n4=62;
    if(n1>n2 && n1>n3 && n1>n4){
        printf("%d n1 is greater",n1);
    }
    if(n2>n1 && n2>n3 && n2>n4){
          printf("%d n2 is greater",n2);
    }
    if(n3>n1 && n3>n2 && n3>n4){
          printf("%d n3 is greater",n3);
    }
    else{
          printf("%d n4 is greater",n4);
    }
    return 0;
}