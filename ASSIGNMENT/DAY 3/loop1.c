#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int n=a;n<b;n++){
        if(n>=1 && n<=9){
            switch(n){
                case1:
                printf("one\n");
                break;
                printf("two\n");
                break;
                printf("three\n");
                break;
                printf("four\n");
                break;
                printf("five\n");
                break;
                printf("six\n");
                break;
                printf("seven\n");
                break;
                printf("eight\n");
                break;
                printf("nine\n");
                break;
            }
        }
        else{
            if(n%2==0){
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
        }
    }
    return 0;
}