#include<stdio.h>
int main(){
    int score;
    printf("enter the score (0-100):");
    scanf("%d",&score);
    if(score<0 || score>100){
        printf("invalid score,please enter a value between 0 and 100.\n");
    }
    else{
        if(score>=90){
            printf("grade:A\n");
             }
             else if(score>=80){
                printf("grade:B\n");}
                else if(score>=70){
                    printf("grade:C\n");
                }
                else if(score>=60){
                    printf("grade:D\n");
                     }
                     else{
                        printf("grade:F\n");
                     }
                     }
             return 0;
    }
