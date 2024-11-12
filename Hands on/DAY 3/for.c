#include<stdio.h>
void main(){
    puts("For Loop Example");

   int i=0,j=25; 
   for(; i < j--;j = j-3, i++){
    printf("******\n");
   }
   printf("%d\n", i*j);
    puts("A simple for loop");

    /*for(int j=0;j<7;j++){
        printf("J = %d\t",j);
        getchar();
    }*/
   for(printf("Increment\t");printf("Condition\t");printf("Updation\t")){
    printf("Hello");
    getchar();
   }
}
